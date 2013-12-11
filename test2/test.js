var addon = require('./build/Release/object');

var obj1 = addon('hello,');
var obj2 = addon('yupeng!');
console.log(obj1.msg+' '+obj2.msg);