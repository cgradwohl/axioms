/**
 * access modifier - read, write
 * 
 * public (default) - accessable from the outside
 * private - inaccessable from the outside
 * protected
 */

class Point {
  constructor(private _x: number, private _y: number) {
    this._x = _x;
    this._y = _y;
  }

  draw() {
    console.log(this._x);
    console.log(this._y);
  };

  // 1. expose the field x to the outside through a public method.
  getX() { 
    return this._x;
  }

  setX(value) { 
    if (value < 0) { 
      throw new Error('Value cannot be less than zero');
    }

    this._x = value;
  }

  // 2. expose a public interface by using properties
  get x() { 
    return this._x;
  }

  set y(value) { 
    if (value < 0) { 
      throw new Error('Value cannot be less than zero');
    }

    this._x = value;
  }
}

let point = new Point(4, 5);

// looks like a field but is really a property or special method on the class
let x = point.x;
point.getX();
point.setX(7);

export { };