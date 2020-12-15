let drawPoint = (x, y) => { 
  // ...
};

// ...
let betterDrawPoint2 = (point) => { 
  // pass a point object instead
};

// use it like this:
betterDrawPoint2({
  x: 1,
  y: 2,
});

// the problem is that someone could do this:
betterDrawPoint2({
  name: 'dude bro', // but we know this will fail at runtime
});

// so what is the solution


// 1. inline annotation - not reusable
let drawPointHelper = (point: { x: number, y: number }) => { 
  // pass a point object instead
};

// 2. use an interface
interface Point { 
  x: number,
  y: number,
}

let bestDrawPointHelper = (point: Point) => { 
  // pass a point object instead
};

