"use strict";
/**
 * access modifier
 * public (default) - accessable from the outside
 * private - inaccessable from the outside
 * protected
 */
Object.defineProperty(exports, "__esModule", { value: true });
var Point = /** @class */ (function () {
    function Point(x, y) {
        this.x = x;
        this.y = y;
    }
    // redundant, all properties are public by default
    Point.prototype.draw = function () {
        console.log(this.x);
        console.log(this.y);
    };
    ;
    return Point;
}());
var point = new Point(4, 5);
// x is private ( inaccesseble from the outside )
point.x = 2;
point.draw();
