"use strict";
/**
 * access modifier - read, write
 *
 * public (default) - accessable from the outside
 * private - inaccessable from the outside
 * protected
 */
Object.defineProperty(exports, "__esModule", { value: true });
var Point = /** @class */ (function () {
    function Point(_x, _y) {
        this._x = _x;
        this._y = _y;
        this._x = _x;
        this._y = _y;
    }
    Point.prototype.draw = function () {
        console.log(this._x);
        console.log(this._y);
    };
    ;
    // 1. expose the field x to the outside through a public method.
    Point.prototype.getX = function () {
        return this._x;
    };
    Point.prototype.setX = function (value) {
        if (value < 0) {
            throw new Error('Value cannot be less than zero');
        }
        this._x = value;
    };
    Object.defineProperty(Point.prototype, "x", {
        // 2. expose a public interface by using properties
        get: function () {
            return this._x;
        },
        enumerable: false,
        configurable: true
    });
    Object.defineProperty(Point.prototype, "y", {
        set: function (value) {
            if (value < 0) {
                throw new Error('Value cannot be less than zero');
            }
            this._x = value;
        },
        enumerable: false,
        configurable: true
    });
    return Point;
}());
var point = new Point(4, 5);
// looks like a field but is really a property or special method on the class
var x = point.x;
point.getX();
point.setX(7);
