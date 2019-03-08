var Environment = require("FuseJS/Environment");
var FileSystem = require("FuseJS/FileSystem");

function ShareHandler() {
  let imageUrl =
    "https://discourse-cdn-sjc2.com/standard17/uploads/fusetools1/original/1X/d9be3282e9d2128c6478020e7db2b311b36dad4d.png";
  var fileName = imageUrl.split("/").pop(); // extract file name from the url
  var xhr = new XMLHttpRequest();
  xhr.open("GET", imageUrl, true);
  xhr.responseType = "arraybuffer";

  xhr.onload = function(oEvent) {
    var arrayBuffer = xhr.response;
    var path = FileSystem.dataDirectory + "/" + fileName;
    console.log(path);
    FileSystem.writeBufferToFile(path, arrayBuffer)
      .then(function() {
        return FileSystem.readTextFromFile(path);
      })
      .then(function(text) {
        // console.log(text);
      });
  };

  xhr.send(null);
}
function ab2str(buf) {
  return String.fromCharCode.apply(null, new Uint16Array(buf));
}
ShareHandler();
