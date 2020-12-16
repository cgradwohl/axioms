// GENERIC CLASSES

// A generic class has a similar shape to a generic interface.
// Generic classes have a generic type parameter list in angle
// brackets(<>) following the name of the class.

class GenericNumber<T> {
  zeroValue: T;
  add: (x: T, y: T) => T;
}

let myGenericNumber = new GenericNumber<number>();
myGenericNumber.zeroValue = 0;
myGenericNumber.add = function (x, y) {
  return x + y;
};

let stringNumeric = new GenericNumber<string>();
stringNumeric.zeroValue = "";
stringNumeric.add = function (x, y) {
  return x + y;
};

/**
 * REMEMBER
 * Class has two sides to its type: the static side and the instance side.
 *
 * Generic classes are only generic over their instance side rather than
 * their static side, so when working with classes, static members can not
 * use the class’s type parameter.
 */