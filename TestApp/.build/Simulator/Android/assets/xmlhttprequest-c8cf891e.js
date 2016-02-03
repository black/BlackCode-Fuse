(function (window, HttpClient) {

	'use strict';
	
	var HttpRequestState = {
		Uninitialized : 0,
		Opened : 1,
		Sent : 2,
		HeadersReceived : 3,
		Loading : 4,
		Done : 5,
		Aborted : 6,
		Errored : 7,
		TimedOut : 8,
	};

	var ProgressEvent = function ProgressEvent(loaded, total, lengthComputable) {
		Object.defineProperties(this, {
			'total' : { value: total },
			'loaded' : { value: loaded },
			'lengthComputable' : { value: lengthComputable }
		});
	};

	var fuseXMLHttpRequest = function fuseXMLHttpRequest() {
		
		var propertyDescriptors = new Object();

		propertyDescriptors._fuseHttpClient = {
			value: new HttpClient()
		};

		propertyDescriptors._fuseHttpRequest = {
			value: null,
			writable: true
		};

		propertyDescriptors.status = {
			get: function () {
				if(this._fuseHttpRequest === null) return 0;
				return this._fuseHttpRequest.getResponseStatus();
			}
		};
		
		propertyDescriptors.statusText = {
			get: function () {
				if(this._fuseHttpRequest === null) return "";
				return this._fuseHttpRequest.getResponseReasonPhrase();
			}
		};

		propertyDescriptors.response = {
			get: function () {
				if(this._fuseHttpRequest === null) return "";
				return this._fuseHttpRequest.getResponseContentString();
			}
		};

		propertyDescriptors.responseText = {
			get: function () {
				if(this._fuseHttpRequest === null) return "";
				return this._fuseHttpRequest.getResponseContentString();
			}
		};

		propertyDescriptors.responseType = {
			value: "text"
		};

		propertyDescriptors.readyState = {
			get: function() {
				if(this._fuseHttpRequest === null) return 0;

				var state = this._fuseHttpRequest.getState();
				if(state <= HttpRequestState.Uninitialized) return fuseXMLHttpRequest.UNSENT;
				if(state == HttpRequestState.Opened) return fuseXMLHttpRequest.OPENED;
				if(state == HttpRequestState.HeadersReceived) return fuseXMLHttpRequest.HEADERS_RECEIVED;
				if(state == HttpRequestState.Loading) return fuseXMLHttpRequest.LOADING;
				if(state >= HttpRequestState.Done) return fuseXMLHttpRequest.DONE;
				return fuseXMLHttpRequest.UNSENT;
			}
		};

		Object.defineProperties(this, propertyDescriptors);
	};
		
	fuseXMLHttpRequest.UNSENT = 0;
	fuseXMLHttpRequest.OPENED = 1;
	fuseXMLHttpRequest.HEADERS_RECEIVED = 2;
	fuseXMLHttpRequest.LOADING = 3;
	fuseXMLHttpRequest.DONE = 4;

	fuseXMLHttpRequest.onloadstart = null;
	fuseXMLHttpRequest.onprogress = null;
	fuseXMLHttpRequest.onabort = null;
	fuseXMLHttpRequest.onerror = null;
	fuseXMLHttpRequest.onload = null;
	fuseXMLHttpRequest.ontimeout = null;
	fuseXMLHttpRequest.onloadend = null;

	fuseXMLHttpRequest.prototype.onreadystatechange = null;
	fuseXMLHttpRequest.prototype.timeout = 0;
	fuseXMLHttpRequest.prototype.withCredentials = false;
	fuseXMLHttpRequest.prototype.upload = null;

	fuseXMLHttpRequest.prototype.open = function(method, url, async, username, password) {
		var self = this;
		var progressEvent = new ProgressEvent(0, 0, false);
		var contentLength = 0;

		if(self._fuseHttpRequest !== null)
			self._fuseHttpRequest.abort();

		self._fuseHttpRequest = self._fuseHttpClient.createRequest(method, url);
		self._fuseHttpRequest.enableCache(true);

		if (self._fuseHttpRequest.getState() === HttpRequestState.Opened && typeof self.onreadystatechange === 'function') {
			self.onreadystatechange.call();
		}

		self._fuseHttpRequest.onstatechanged = function(state) {
			if (state === HttpRequestState.HeadersReceived) {
				if(typeof self.onreadystatechange === 'function')
					self.onreadystatechange.call();

				var cl = parseInt(self.getResponseHeader('Content-Length'));
				contentLength = (cl === NaN) ? 0 : cl;
				progressEvent = new ProgressEvent(0, contentLength, contentLength > 0);
				if(typeof self.onloadstart === 'function') {
					self.onloadstart(progressEvent);
				}
			} else if (state === HttpRequestState.Loading && typeof self.onreadystatechange === 'function') {
				self.onreadystatechange.call();
			} else if (state === HttpRequestState.Done && typeof self.onreadystatechange === 'function') {
				self.onreadystatechange.call();	
			}
		};
		self._fuseHttpRequest.ondone = function() {
			if(typeof self.onload === 'function')
				self.onload();

			if(typeof self.onloadend === 'function')
				self.onloadend(progressEvent);
		};
		self._fuseHttpRequest.onabort = function() {
			if(typeof self.onabort === 'function')
				self.onabort();

			if(typeof self.onloadend === 'function')
				self.onloadend(progressEvent);
		};
		self._fuseHttpRequest.onerror = function(error) {
			if(typeof self.onerror === 'function')
				self.onerror(error);

			if(typeof self.onloadend === 'function')
				self.onloadend(progressEvent);
		};
		self._fuseHttpRequest.onprogress = function(current, total, hastotal) {
			progressEvent = new ProgressEvent(current, total, hastotal);
			if(typeof self.onprogress === 'function')
				self.onprogress(progressEvent);
		};
		self._fuseHttpRequest.ontimeout = function() {
			if(typeof self.ontimeout === 'function')
				self.ontimeout();

			if(typeof self.onloadend === 'function')
				self.onloadend(progressEvent);
		};
	}

	fuseXMLHttpRequest.prototype.send = function(data) {
		if(this._fuseHttpRequest !== null){
			this._fuseHttpRequest.setTimeout(this.timeout);
			this._fuseHttpRequest.sendAsync(data);
		}
		else
			throw "InvalidStateError";
	}
	
	fuseXMLHttpRequest.prototype.setRequestHeader = function(header, value) {
		if(this._fuseHttpRequest === null) return;
		return this._fuseHttpRequest.setHeader(header, value);
	}

	fuseXMLHttpRequest.prototype.abort = function() {
		if(this._fuseHttpRequest === null) return;
		return this._fuseHttpRequest.abort();
	}

	fuseXMLHttpRequest.prototype.getResponseHeader = function(header) {
		if(this._fuseHttpRequest === null) return;
		return this._fuseHttpRequest.getResponseHeader(header);
	}

	fuseXMLHttpRequest.prototype.overrideMimeType = function(mime) {
		throw "Method not supported";
	}

	fuseXMLHttpRequest.prototype.getAllResponseHeaders = function() {
		if(this._fuseHttpRequest === null) return;
		return this._fuseHttpRequest.getResponseHeaders();
	}

	if(window.EventTarget != 'undefined') {
		fuseXMLHttpRequest.prototype.addEventListener = window.EventTarget.addEventListener;
		fuseXMLHttpRequest.prototype.removeEventListener = window.EventTarget.removeEventListener;
		fuseXMLHttpRequest.prototype.dispatchEvent = window.EventTarget.dispatchEvent;
	}

	window.XMLHttpRequest = fuseXMLHttpRequest;

})(window, HttpClient);

XMLHttpRequest = window.XMLHttpRequest;