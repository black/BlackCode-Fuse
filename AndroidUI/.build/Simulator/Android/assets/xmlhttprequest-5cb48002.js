// Assumed extern:
// function fusejs_http_send(id, method, url, headers, data, callback);

function XMLHttpRequest()
{
	var UNSENT = 0;
	var OPENED = 1;
	var HEADERS_RECEIVED = 2;
	var LOADING = 3;
	var DONE = 4;

	this.readyState = UNSENT;

	this._headers = {};
	this._sent = false;
	this._aborted = false;

	var _responseHeaders;

	this.open = function(method, url)
	{
		this._method = method;
		this._url = url;
		this._setReadyState(OPENED);
	};

	this.setRequestHeader = function(header, value)
	{
		this._headers[header] = value;
	}
	
	this.getResponseHeader = function(header)
	{
		return "";
	}
	
	this.getAllResponseHeaders = function()
	{
		return _responseHeaders;
	}

	this.send = function(data)
	{
		if (this.readyState !== OPENED)
		{
			throw new Error("Request has not been opened");
		}

		this._sent = true;

		var self = this;

		fusejs_http_send(this._method, this._url, this._headers, data, function(status, responseHeaders, responseText) 
		{
			if (this._aborted) return;
			self.status = status;
			_responseHeaders = responseHeaders;
			self.responseText = responseText;

			self._setReadyState(DONE);
			self._sendLoad();
		});
	}

	this.abort = function()
	{
		// TODO: actually abort

		if (!(this.readyState == UNSENT || (this.readyState == OPENED && !this._sent) || (this.readyState == DONE)))
		{
			this._sent = false;
			this._setReadyState(DONE);
		}
		if (this.readyState == DONE)
		{
			this._sendLoad();
		}

		this.readyState = UNSENT;
		this._aborted = true;
	}

	this._setReadyState = function(state)
	{
		this.readyState = state;
		var handler = this.onreadystatechange;
		if (handler) handler(null);
	};

	this._sendLoad = function()
	{
		var onload = this.onload;
		if (onload) onload(null);
	}
}

