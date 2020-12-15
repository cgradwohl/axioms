"use strict";
/**
 * Lack of Cohesion - when highly related data and data operations are loosely coupled, we could say that they lack cohesion.
 *
 * If we want more cohesion for OOP design, then we seek to tightly couply the data and its highly related data operations into a class.
 */
Object.defineProperty(exports, "__esModule", { value: true });
//   ... and its data operations are highly related, they should improve cohesion (tighly couple)
// and form a class (a unit of data and highly releated opterations).
var drawPoint = function (point) { };
var getDistance = function (pointA, pointB) { };
var PointKlass = /** @class */ (function () {
    function PointKlass() {
    }
    // methods
    PointKlass.prototype.drawPoint = function () {
        // cohesion
        console.log(this.x);
        console.log(this.y);
    };
    ;
    PointKlass.prototype.getDistant = function (point) {
        console.log(this.x);
        console.log(this.y);
        console.log(point.x);
        console.log(point.y);
    };
    ;
    return PointKlass;
}());
