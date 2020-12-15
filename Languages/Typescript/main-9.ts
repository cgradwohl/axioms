/**
 * access modifier
 * 
 * public (default) - accessable from the outside
 * private - inaccessable from the outside
 * protected
 */

class Point {
  // these are reduncant!
  // private x: number;
  // private y: number;

  // tsc compiler will generate these fields for us !!!
  constructor(private x: number, private y: number) {
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