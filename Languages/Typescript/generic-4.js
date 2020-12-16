"use strict";
// GENERIC CONSTRAINTS
exports.__esModule = true;
function loggingIdentity(arg) {
    console.log(arg.length); // Now we know it has a .length property, so no more error
    return arg;
}
var me = loggingIdentity('Chris');
var array = loggingIdentity([1, 2, 3]);
console.log(me);
console.log(array);
