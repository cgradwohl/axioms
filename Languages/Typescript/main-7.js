"use strict";
/**
 * constructors
 */
Object.defineProperty(exports, "__esModule", { value: true });
var Point = /** @class */ (function () {
    function Point(x, y) {
        this.x = x;
        this.y = y;
    }
    Point.prototype.draw = function () {
        console.log(this.x);
        console.log(this.y);
    };
    ;
    return Point;
}());
var point = new Point(); // now we need to pass x, y values when instantiating
point.draw();
