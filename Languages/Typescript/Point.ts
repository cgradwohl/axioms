export default class Point {
  constructor(private _x: number, private _y: number) {
    this._x = _x;
    this._y = _y;
  }

  draw() {
    console.log(this._x);
    console.log(this._y);
  };

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
