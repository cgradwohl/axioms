/**
 * Type Assertions
 */
let message = 'abc';
let endsWithC = message.endsWith('c');

// Note the itellisense issues here
let message2;
message2 = '123';
// let endsWithC2 = message2.; // we loose intellisense, typescript doesn't know the type for variable 'message2'

// type assersion to help the compiler
// ??? i think is called casting in C ???
let endsWithC2 = (<string>message2).endsWith('c');  // now intellisense is back.

// NOTE: can use the editor in this way, to sanitiy check code...and confirm that you types work LOL

// another way to do type assertion, or cast message3 as a string
let message3;
message3 = 'abc';
let endsWithC3 = (message3 as string).endsWith('c');

console.log('endsWithC', endsWithC);
console.log('endsWithC2', endsWithC2);
console.log('endsWithC3', endsWithC3);

// prints:
// endsWithC true
// endsWithC2 false
// endsWithC3 true