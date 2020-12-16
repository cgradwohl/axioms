// GENERIC CONSTRAINTS

// Instead of working with any and all types, we’d like to
// constrain this function to work with any and all types
// that also have the.length property. As long as the type
// has this member, we’ll allow it, but it’s required to have
// at least this member.To do so, we must list our requirement
// as a constraint on what T can be.

// To do so, create an interface that describes our constraint.
// Here, we’ll create an interface that has a single.length
// property and then we’ll use this interface and the extends
// keyword to denote our constraint:
interface Lengthwise {
  length: number;
}

function loggingIdentity<T extends Lengthwise>(arg: T): T {
  console.log(arg.length); // Now we know it has a .length property, so no more error
  return arg;
}

const me = loggingIdentity('Chris');
const array = loggingIdentity([1, 2, 3]);

console.log(me);
console.log(array);

export { };