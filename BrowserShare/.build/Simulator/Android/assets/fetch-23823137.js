
var Observable = require("FuseJS/Observable");

console.log("Fetch is deprecated, use fetch instead.");

var Fetch = function(url, transform)
{
	var self = Observable();

	self.setUrl = function(u)
	{
		if (u === undefined) return;
		if (u === null) return;
		if (u.length == 0) return;

		fusejs_http_send("GET", u, {}, null, function(status, responseHeaders, responseText) 
		{
			var r = responseText;
			if (transform != undefined) r = transform.call(self, r);
			self.value = r;
		});
	};

	self.setUrl(url);

	return self;
}

module.exports = Fetch;
