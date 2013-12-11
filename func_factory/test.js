var addon = require('./build/Release/func_factory');

var fn = addon();
console.log(fn()); // 'hello world'