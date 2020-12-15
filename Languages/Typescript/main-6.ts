class Point { 
  x: number;
  y: number;

  draw() {
    console.log(this.x);
    console.log(this.y);
  };
  
  getDistant(point: Point) { 
    console.log(this.x);
    console.log(this.y);
    console.log(point.x);
    console.log(point.y);
  };
}

// an object is an instance of a class
// let point: Point = new Point(); // note that doing a type assertion with the new operator is redunadant
let point = new Point();
point.x = 1;
point.y = 2;
point.draw();