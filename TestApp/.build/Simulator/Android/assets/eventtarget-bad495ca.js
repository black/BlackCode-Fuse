/*interface EventListener
 {
 void handleEvent(Event event);
 }
 interface EventTarget
 {
 void addEventListener(string type, EventListener? callback, boolean capture = false);
 void removeEventListener(string type, EventListener? callback, boolean capture	= false);
 bool dispatchEvent(Event event); //https://dom.spec.whatwg.org/#concept-event-dispatch
 }*/
//Adopted from https://github.com/WebReflection/event-target
EventTarget = (function() {

    "use strict";

    var PREFIX = "@@",
        EventTarget = {},
        descriptor = {
            // in ES5 does not bother with enumeration
            configurable: true,
            value: null
        },
        defineProperty = Object.defineProperty,
        indexOf = [].indexOf,
        has = EventTarget.hasOwnProperty;

    function configure(obj, prop, value) {
        descriptor.value = value;
        defineProperty(obj, prop, descriptor);
        descriptor.value = null;
    }

    function on(self, type, listener) {
        var array;
        if (has.call(self, type)) {
            array = self[type];
        } else {
            configure(self, type, array = []);
        }
        if (indexOf.call(array, listener) < 0) {
            array.push(listener);
        }
    }

    function dispatch(self, type, evt) {
        var array, current, i;
        if (has.call(self, type)) {
            evt.target = self;
            array = self[type].slice(0);
            for (i = 0; i < array.length; i++) {
                current = array[i];
                if (typeof current === "function") {
                    current.call(self, evt);
                } else if (typeof current.handleEvent === "function") {
                    current.handleEvent(evt);
                }
            }
        }
    }

    function off(self, type, listener) {
        var array, i;
        if (has.call(self, type)) {
            array = self[type];
            i = indexOf.call(array, listener);
            if (-1 < i) {
                array.splice(i, 1);
                if (!array.length) {
                    delete self[type];
                }
            }
        }
    }

    configure(EventTarget, "addEventListener", function addEventListener(type, listener) {
        on(this, PREFIX + type, listener);
    });

    configure(EventTarget, "dispatchEvent", function dispatchEvent(evt) {
        dispatch(this, PREFIX + evt.type, evt);
    });

    configure(EventTarget, "removeEventListener", function removeEventListener(type, listener) {
        off(this, PREFIX + type, listener);
    });

    return EventTarget;

})();

if (typeof window !== 'undefined') {
    Window.prototype.addEventListener = EventTarget.addEventListener;
    Window.prototype.removeEventListener = EventTarget.removeEventListener;
    Window.prototype.dispatchEvent = EventTarget.dispatchEvent;

    window.EventTarget = EventTarget;
}