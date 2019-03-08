var Environment = require("FuseJS/Environment");
var FileSystem = require("FuseJS/FileSystem");

function ShareHandler() {
  let imageUrl =
    "https://discourse-cdn-sjc2.com/standard17/uploads/fusetools1/original/1X/d9be3282e9d2128c6478020e7db2b311b36dad4d.png";
  var fileName = imageUrl.split("/").pop(); // extract file name from the url
  var oReq = new XMLHttpRequest();
  oReq.open("GET", imageUrl, true);
  oReq.responseType = "arraybuffer";
  oReq.onload = function(oEvent) {
    var arrayBuffer = oReq.response;
    var target = false;
    if (arrayBuffer) {
      if (Environment.ios) {
        let devicePath = FileSystem.iosPaths.temp;
        target = true;
        console.log(devicePath);
      } else if (Environment.android) {
        let devicePath = FileSystem.androidPaths.externalCache;
        target = true;
        console.log(devicePath);
      }
      console.log(target);

      //   if (target) {
      //     var path = devicePath + fileName;
      //     FileSystem.writeBufferToFile(path, arrayBuffer).then(
      //       function() {
      //         console.log("Successful write");
      //       },
      //       function(error) {
      //         console.log(error);
      //       }
      //     );
      //   }
    }
  };
  oReq.send(null);
}
ShareHandler();
