/**
 * constructors
 */

class Point {
  x: number;
  y: number;

  constructor(x?: number, y?: number) { // making the parameter optional
    this.x = x;
    this.y = y;
  }

  draw() {
    console.log(this.x);
    console.log(this.y);
  };
}

let point = new Point(); // now we need to pass x, y values when instantiating
point.draw();

export { };