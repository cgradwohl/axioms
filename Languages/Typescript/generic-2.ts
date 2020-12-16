// Generic Types

function identity<T>(arg: T): T {
  return arg;
}

// a type of the function itself
// ': <T>(arg: T) => T' is the return type of the function myIdentity
let myIdentity: <T>(arg: T) => T = identity;

const me = myIdentity("Chris");

console.log(me);



// We can also write the generic type as a call signature of an object literal type:
// so `{ <T>(arg: T): T }` is the return type of the funtion _myIdentity
let _myIdentity: { <T>(arg: T): T } = identity;


// Let’s take the object literal from the previous example and move it to an interface:

interface GenericIdentityFn {
  <T>(arg: T): T;
}

// so myIdentityFunc return a GenericIdentityFn
let myIdentityFunc: GenericIdentityFn = identity;
// NOTE: here we DO NOT KNOW THE RETURN TYPE OF THE VARIABLE threeVar BUT WE DO KNOW THE VALUE!
const threeVar = myIdentityFunc(3);

// i.e.
function myIdentityFunc2(a): <T>(arg: T) => T { 
  return identity(a);
}
// NOTE: here we DO NOT KNOW THE RETURN TYPE OF THE VARIABLE three!
const three = myIdentityFunc2(3);

/**
 * BREAKDOWN - the return type of a function
 * 1. <T>(a: T) => T
 *    this part  (a: T) => T means:
 *        - the function returns a function that takes one
 *          generic argument and returns that generic type
 *    this part <T> means:
 *        - to capture the type of the argument that is
 *          passed into the function
 * 
 * 2. { <T>(arg: T): T }
 *    a function is an object where the key is the argument and the value is the return value
 */

interface GenericIdentityFnType<T> {
  (arg: T): T;
}

// a non-generic function signature that is a part of a generic type
let myIdentityType: GenericIdentityFnType<number> = identity;
// NOTE: here we KNOW THE RETURN TYPE OF THE VARIABLE iAmThree BUT WE DO NOT KNOW THE VALUE!
const iAmThree = myIdentityType(3);

/**
 * Notice that our example has changed to be something slightly different.
 * Instead of describing a generic function, we now have a non-generic
 * function signature that is a part of a generic type.
 * 
 * When we use GenericIdentityFnType, we now will also need to specify
 * the corresponding type argument (here: number), effectively locking
 * in what the underlying call signature will use.
 * 
 * Understanding when to put the type parameter directly on the call
 * signature and when to put it on the interface itself will be helpful
 * in describing what aspects of a type are generic.
 */