var drawPoint = function (x, y) {
    // ...
};
// ...
var betterDrawPoint2 = function (point) {
    // pass a point object instead
};
// use it like this:
betterDrawPoint2({
    x: 1,
    y: 2,
});
// the problem is that someone could do this:
betterDrawPoint2({
    name: 'dude bro',
});
// so what is the solution
// 1. inline annotation - not reusable
var drawPointHelper = function (point) {
    // pass a point object instead
};
var bestDrawPointHelper = function (point) {
    // pass a point object instead
};
