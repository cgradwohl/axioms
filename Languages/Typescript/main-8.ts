/**
 * access modifier
 * public (default) - accessable from the outside
 * private - inaccessable from the outside
 * protected
 */

class Point {
  private x: number;
  private y: number;

  constructor(x: number, y: number) {
    this.x = x;
    this.y = y;
  }

  // redundant, all properties are public by default
  public draw() {
    console.log(this.x);
    console.log(this.y);
  };
}

let point = new Point(4, 5);
// x is private ( inaccesseble from the outside )
point.x = 2;

point.draw();

export { };