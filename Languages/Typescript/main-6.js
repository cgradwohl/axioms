var Point = /** @class */ (function () {
    function Point() {
    }
    Point.prototype.draw = function () {
        console.log(this.x);
        console.log(this.y);
    };
    ;
    Point.prototype.getDistant = function (point) {
        console.log(this.x);
        console.log(this.y);
        console.log(point.x);
        console.log(point.y);
    };
    ;
    return Point;
}());
// an object is an instance of a class
// let point: Point = new Point(); // note that doing a type assertion with the new operator is redunadant
var point = new Point();
point.x = 1;
point.y = 2;
point.draw();
