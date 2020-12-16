// Generic Types
function identity(arg) {
    return arg;
}
// ': <T>(arg: T) => T' is the return type of the variable myIdentity
var myIdentity = identity;
var me = myIdentity("Chris");
console.log(me);
