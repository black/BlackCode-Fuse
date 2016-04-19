
var Fetch = require("FuseJS/Fetch");

console.log("FetchJson is deprecated, use fetch instead.");

var FetchJson = function(url)
{
	return Fetch(url, function(v)
		{
			try
			{
				return JSON.parse(v);
			}
			catch (err)
			{
				this.failed("Failed to parse JSON: " + err.message + ": " + v);
			}
		});
}

module.exports = FetchJson;