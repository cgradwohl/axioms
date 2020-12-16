// Generics and Genric Type Variables

/**
 * By using the any type, we are loosing information about the type passed in
 * @param arg - any type
 */
function identity(arg: any): any {
  return arg;
}

/**
 * we need a way of capturing the type of arg
 * a type variable, is a special kind of variable
 * that store types not values.
 * 
 * Below T allows us to capture the type of arg,
 * so that we can use that information later, 
 * (like using it for the return type).
 */
function identityGeneric<T>(arg: T): T {
  return arg;
}


/**
 * Once we’ve written a generic function, we can call
 * it in one of two ways.
 * 
 * The first way is to pass all of the arguments,
 * including the type argument, to the function.
 * 
 * We explicitly set T to be string as one of the
 * arguments to the function call, denoted using the 
 * <> around the arguments rather than () as in functions.
 */
let explicitCall = identityGeneric<string>("myString");


/**
 * The second way is also perhaps the most common.
 * Here we use type argument inference — that is, we want
 * the compiler to set the value of T for us automatically
 * based on the type of the argument we pass in.
 * 
 * We DO NOT have to explicitly pass the type into <>;
 */
let implicitCall = identityGeneric("myString");

//   =   =   =   =   =   =   =   =   =   =   =   =   =   =   =
// oops we have a problem with generic type variables
// we dont know what the user will pass in so ".length" might not exist
function problem_loggingIdentity<T>(arg: T): T {
  console.log(arg.length);
  return arg;
}

// lets say we pass in an array of any type
function loggingIdentity<T>(arg: T[]): T[] {
  console.log(arg.length); // Array has a .length, so no more error
  return arg;
}

// an easier to read version of above is:
function loggingIdentityEasyToRead<T>(arg: Array<T>): Array<T> {
  console.log(arg.length); // Array has a .length, so no more error
  return arg;
}

