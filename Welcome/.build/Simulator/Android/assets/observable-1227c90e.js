
/* ----- Observable ------

	Message API:

	set(value) - Set a single value (at index 0)
	newAt(index, value) - New value at the given index
	newAll(length) - Assume all values dirty
	add(value) - Add to end of list
	remove(object, index) - Remove object at index
	insertAt(index, value) - Insert value at index
*/

/*
	Creates a new observable.
	Syntax: Observable([initial value(s)])
*/
var Observable = function()
{
	var obs = Object.create(Observable.prototype);

	obs._subscribers = [];

	if ((arguments.length === 1) && (arguments[0] instanceof Function))
	{
		obs._initFuncObservable(arguments[0]);
	}
	else
	{
		obs._isLeaf = true;
		obs._values = Array.prototype.slice.call(arguments);
		if (!obs._values) { obs._values = [] }
	}

	return obs;
};

var Subject = function()
{
	var obs = Observable();
	obs._isLeaf = false;
	return obs;
}

function Unwrap(x)
{
	if (x instanceof Observable) return x.value;
	else return x;
}

function Identity(x)
{
	return x;
}

var Observe = function()
{
	var res = Subject();

	var callback = arguments[arguments.length-1];
	if (!(callback instanceof Function)) {
		throw new Error("Last argument to Observe() must be a function");
	}

	var sources = Array.prototype.slice.call(arguments, 0, arguments.length-1);

	for (var i = 0; i < sources.length; i++) {
		if (!(sources[i] instanceof Observable)) {
			throw new Error("All (except the last) arguments to Observe() must be of type Observable");
		}
	}

	var callbackProxy = function(src, op, p1, p2)
	{
		callback.call(res, src, op, p1, p2);
	};

	res.beginSubscriptions = function()
	{
		for (var i = 0; i < sources.length; i++)
		{
			sources[i].addSubscriber(callbackProxy);
		}
	};

	res.endSubscriptions = function()
	{
		for (var i = 0; i < sources.length; i++)
		{
			sources[i].removeSubscriber(callbackProxy);
		}
	}

	return res;
}


Observable.prototype._initFuncObservable = function(func)
{
	var obs = this;
	obs._values = [];
	obs._func = arguments[0];
	obs._dependencies = [];

	var obsFunc = arguments[0];

	var evaluating = false;

	var depChanged = function()
	{
		if (!evaluating)
		{
			obs.value = evaluate();
		}
	};

	var evaluate = function()
	{
		evaluating = true;
		var oldDependencies = obs._dependencies;
		var newDependencies = [];
		obs._dependencies = newDependencies;

		_dependencyStack.push(obs);
		try
		{
			var res = obsFunc.apply(obs);
		}
		finally
		{
			_dependencyStack.pop(obs);
		}

		oldDependencies.forEach(function(x) {
			var i = newDependencies.indexOf(x);
			if (i === -1) {
				x.removeSubscriber(depChanged);
			}
		});

		newDependencies.forEach(function(x) {
			var i = oldDependencies.indexOf(x);
			if (i === -1) {
				x.addSubscriber(depChanged);
			}
		});

		// Call again to get clean values
		res = obsFunc.apply(obs);

		evaluating = false;

		return res;
	};


	obs.beginSubscriptions = function()
	{
		depChanged();
	};

	obs.endSubscriptions = function()
	{
		obs._dependencies.forEach(function (x) {
			x.removeSubscriber(depChanged);
		});
	};
}

var _dependencyStack = [];

Observable.prototype.depend = function()
{
	if (_dependencyStack.length === 0) return;
	var current = _dependencyStack[_dependencyStack.length-1];
	if (current === this) return;

	var i = current._dependencies.indexOf(this);
	if (i === -1)
	{
		current._dependencies.push(this);
	}
}

Observable.prototype._assertNoDependence = function(x)
{
	if (_dependencyStack.length === 0) return;

	throw new Error("Observable(): cannot create new observables while evaluating dependency function :" + x);
}

Observable.prototype.addSubscriber = function(s)
{
	this._subscribers.push(s);

	var send = this._isLeaf;

	if (this._subscribers.length === 1)
	{
		this.beginSubscriptions();
	}
	else send = true;

	if (send)
	{
		if (this._values.length == 1)
		{
			s.call(null, this, "set", this._values[0]);
		}
		else
		{
			s.call(null, this, "newAll", this._values.length);
		}
	}
}

Observable.prototype.removeSubscriber = function(s)
{
	var i = this._subscribers.indexOf(s);
	this._subscribers.splice(i, 1);

	if (this._subscribers.length == 0)
	{
		this.endSubscriptions();
	}
}

/*
	Protected.
	When overridden in a derived observer type, this creates subscriptions with
	all observed sources.
*/
Observable.prototype.beginSubscriptions = function() {}

/*
	Protected.
	When overridden in a derived observer type, this removes subscriptions with
	all observed sources.
*/
Observable.prototype.endSubscriptions = function() {}


/*
	Gets the value at a specific index.
	Syntax: observable.getAt(index)
*/
Observable.prototype.getAt = function(index)
{
	this.depend();
	return this._values[index];
}

/*
	Replaces the value at a specific index.
	Syntax: observable.replaceAt(index, value);
*/
Observable.prototype.replaceAt = function(index, value)
{
	this._values[index] = value;
	this._sendMessage(this, "newAt", index, value);
}

/*
	Inserts a value at a specific index.
	Syntax: observable.insertAt(index, value);
*/
Observable.prototype.insertAt = function(index, value)
{
	if (index == this._values.length)
	{
		this.add(value);
	}
	else
	{
		this._values.splice(index, 0, value);
		this._sendMessage(this, "insertAt", index, value);
	}
}

Observable.prototype.failed = function(message)
{
	this._sendMessage(this, "failed", message);
}

Observable.prototype.replaceAll = function(newValues)
{
	if (newValues instanceof Observable)
	{
		newValues = newValues._values;
	}

	if (!(newValues instanceof Array))
	{
		throw new Error("replaceAll(): argument must be an array");
	}

	if (!newValues)
	{
		newValues = [];
	}

	this._values = newValues.slice();
	this._sendMessage(this, "newAll", this._values.length);
}

Observable.prototype.refreshAll = function(newValues, comparefunc, updateFunc, mapFunc)
{
	if (newValues instanceof Observable)
	{
		newValues = newValues._values;
	}

	if (!(newValues instanceof Array))
	{
		throw new Error("refreshAll(): argument must be an array or observable");
	}

	if (!newValues)
	{
		newValues = [];
	}

	if (comparefunc === undefined)
		comparefunc = function(x, y) { return x === y; };

	for (var i = 0; i < Math.min(newValues.length, this._values.length); i++)
	{
		var a = this._values[i];
		var b = newValues[i];

		if (!comparefunc(a, b))
		{
			if (mapFunc !== undefined)
				this.replaceAt(i, mapFunc(b));
			else
				this.replaceAt(i, b);
		}
		else
		{
			if (updateFunc !== undefined)
				updateFunc(a, b);
		}
	}

	for (var i = this._values.length; i < newValues.length; i++)
	{
		if (mapFunc !== undefined)
			this.add(mapFunc(newValues[i]));
		else
			this.add(newValues[i]);
	}

	for (var i = newValues.length; i < this._values.length; i++)
	{
		this.removeAt(i);
	}
}

Observable.prototype.add = function(x)
{
	this._values.push(x);
	this._sendMessage(this, "add", x);
}

Observable.prototype.remove = function(x)
{
	if (!this.tryRemove(x))
		throw new Error("Observable.remove(): item not found");
}

Observable.prototype.tryRemove = function(x)
{
	var i = this._values.indexOf(x);
	if (i != -1)
	{
		this._values.splice(i, 1);
		this._sendMessage(this, "remove", x, i);
		return true;
	}
	else
	{
		return false;
	}
}

Observable.prototype.removeWhere = function(f)
{
	var count = 0;
	for (var i = 0; i < this._values.length; i++)
	{
		var x = this.getAt(i);
		if (f(x))
		{
			this.removeAt(i--);
			count++;
		}
	}
	return count;
}

Observable.prototype.removeAt = function(index)
{
	var obj = this._values[index];
	this._values.splice(index, 1);
	this._sendMessage(this, "remove", obj, index);
}


Observable.prototype.clear = function()
{
	this.replaceAll([]);
}

/*
	Executes a function on all the current values.
*/
Observable.prototype.forEach = function(f)
{
	this.depend();
	for (var i = 0; i < this._values.length; i++)
	{
		f(this._values[i], i);
	}
}

Observable.prototype.indexOf = function(x)
{
	this.depend();
	return this._values.indexOf(x);
}

Observable.prototype.contains = function(x)
{
	this.depend();
	return this._values.indexOf(x) !== -1;
}


/*
	Returns the number of values in the observable.
*/
Object.defineProperty(Observable.prototype, "length",
{
	get: function()
	{
		this.depend();
		return this._values.length;
	}
});

Observable.prototype.setValueExclusive = function(value, excludingObserver)
{
	this._values = [value];

	for (var i = 0; i < this._subscribers.length; i++)
	{
		if (this._subscribers[i] === excludingObserver)
		{
			continue;
		}
		this._subscribers[i](this, "set", this._values[0]);
	}
}

/*
	Gets or sets the (first) value of the observable.
	This property is mainly for use with for sigle-valued observables.
	If the observable contains multiple values, this property only
	gets or sets the first value.
*/
Object.defineProperty(Observable.prototype, "value",
{
	get : function()
	{
		this.depend();
		if (this._values.length === 0) { return undefined; }
		else { return this._values[0]; }
	},
	set : function(x)
	{
		this._values = [x];
		this._sendMessage(this, "set", x);
	}
});


/*
	Returns an observable that will only propagate values that pass the given
	criteria, otherwise it retains it's previous value.

	This method only considers the first (single) value of an observable.
*/
Observable.prototype.filter = function(f)
{
	this._assertNoDependence("filter");

	if (!f) f = Identity;

	return Observe(this, function(src)
	{
		if (f(src.value)) this.value = src.value;
	});
}

Observable.prototype.toString = function()
{
	this.depend();
	if (this._values) { return "(observable) " + this._values.toString(); }
	else return "(no value)";
}


/* internal */
Observable.prototype._sendMessage = function()
{
	for (var i = 0; i < this._subscribers.length; i++)
	{
		this._subscribers[i].apply(null, arguments);
	}
}



/* --- operators --- */

Observable.prototype.map = function(f)
{
	this._assertNoDependence("map");

	return Observe(this, function(src, op, p1, p2)
	{
		if (op == "set")
		{
			this.value = f(p1, 0);
		}
		else if (op == "add")
		{
			this.add(f(p1, this.length));
		}
		else if (op == "newAt")
		{
			this.replaceAt(p1, f(p2, p1));
		}
		else if (op == "failed")
		{
			this.failed(p1);
		}
		else
		{
			// Fallback - assume all is dirty
			// The "remove" and "insertAt" cases are handled here
			// too since the map indices change
			var r = [];
			for (var i = 0; i < src.length; ++i)
			{
				r.push(f(src.getAt(i), i));
			}
			this.replaceAll(r);
		}
	});
};


Observable.prototype.expand = function(f)
{
	this._assertNoDependence("expand");

	var self = this;
	return Observe(self, function () {

		if (self.length > 1)
			throw new Error("expand(): can only be used on a single value");

		var r = self.value;

		if (r === undefined)
			this.replaceAll([]);

		if (!(r instanceof Array))
			throw new Error("expand(): source value must be an array");

		this.replaceAll(r);
	});
};


Observable.prototype.where = function(criteria)
{
	this._assertNoDependence("where");

	var self = this.map(function(x)
	{
		return {
			condition: criteria(x),
			value: x
		};
	});

	var res = Subject();
	var subs = [];
	var subscribing = false;

	var conditionToSub = function(x)
	{
		for (var i = 0; i < subs.length; i++)
		{
			if (subs[i].condition === x)
				return subs[i];
		}
		throw new Error();
	};

	var itemChanged = function(x)
	{
		if (subscribing) return;

		var cond = Unwrap(x);
		var sub = conditionToSub(x);
		var contains = res.contains(sub.value);

		if (cond && !contains)
		{
			res.add(sub.value);
		}
		if (!cond && contains)
		{
			res.remove(sub.value);
		}
	};

	var selfChanged = function(src, op, p1, p2)
	{
		if (op == "add")
		{
			subscribing = true;

			if (p1.condition instanceof Observable)
			{
				p1.condition.addSubscriber(itemChanged);
				subs.push(p1);
			}

			subscribing = false;

			if (Unwrap(p1.condition))
			{
				res.add(p1.value);
			}
		}
		else if (op == "remove")
		{
			var i = subs.indexOf(p1);
			if (i !== -1)
			{
				subs.splice(i, 1);
				p1.condition.removeSubscriber(itemChanged);
			}

			if (res.contains(p1.value))
			{
				res.remove(p1.value);
			}
		}
		else if (op == "failed")
		{
			res.failed(p1);
		}
		else
		{
			subscribing = true;

			subs.forEach(function(x) {
				x.condition.removeSubscriber(itemChanged);
			});

			subs = [];

			var r = [];
			self.forEach(function(x) {

				if (x.condition instanceof Observable)
				{
					x.condition.addSubscriber(itemChanged);
					subs.push(x);
				}

				if (Unwrap(x.condition))
				{
					r.push(x.value);
				}
			});
			subscribing = false;

			res.replaceAll(r);
		}
	};

	res.beginSubscriptions = function()
	{
		self.addSubscriber(selfChanged);
	};

	res.endSubscriptions = function()
	{
		self.removeSubscriber(selfChanged);
		subs.forEach(function(x) {
			x.condition.removeSubscriber(itemChanged);
		});
	};

	return res;

}



Observable.prototype.count = function(criteria)
{
	this._assertNoDependence("count");

	if (criteria instanceof Function)
	{
		return this.where(criteria).count();
	}

	return  Observe(this, function(src) {
		this.value = src.length;
	});
};


Observable.prototype.inner = function()
{
	this._assertNoDependence("inner");

	var self = this;
	var res = Subject();
	var sub = null;

	var innerChanged = function(src, op, p1, p2)
	{
		res.replaceAll(src);
	};

	var selfChanged = function(src)
	{
		if (sub)
		{
			sub.removeSubscriber(innerChanged);
		}
		sub = src.value;
		if (sub)
		{
			sub.addSubscriber(innerChanged);
		}
	};

	res.beginSubscriptions = function()
	{
		self.addSubscriber(selfChanged);
	};

	res.endSubscriptions = function()
	{
		self.removeSubscriber(selfChanged);
		if (sub)
		{
			sub.removeSubscriber(innerChanged);
		}
		sub = null;
	};

	return res;
}

Observable.prototype.not = function()
{
	return this.map(function (x) { return !x; });
}

module.exports = Observable;
