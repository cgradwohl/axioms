/**
 * Lack of Cohesion - when highly related data and data operations are loosely coupled, we could say that they lack cohesion.
 *
 * If we want more cohesion for OOP design, then we seek to tightly couply the data and its highly related data operations into a class.
 */


 // since this interface (data)   ...
interface Point { 
  x: number,
  y: number,
}


//   ... and its data operations are highly related, they should improve cohesion (tighly couple)
// and form a class (a unit of data and highly releated opterations).
let drawPoint = (point: Point) => { };
let getDistance = (pointA: Point, pointB: Point) => { };

// creating cohesion
interface witnessCohesion { 
  x: number,
  y: number,
  drawPoint: () => void,
  detDistance: () => number,
}

class PointKlass { 
  // fields
  x: number;
  y: number;

  // methods
  drawPoint() {
    // cohesion
    console.log(this.x);
    console.log(this.y);
  };
  
  getDistant(point: PointKlass) { 
    console.log(this.x);
    console.log(this.y);
    console.log(point.x);
    console.log(point.y);
  };
}

export { };
