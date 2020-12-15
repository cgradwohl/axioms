"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
/**
 * TYPES
 */
var count = 5;
count = 'a';
// any type
var z;
z = 1;
z = 'b';
z = true;
// types list
var a;
var b;
var c;
var d;
var e;
var f;
var ColorRed = 0;
var ColorBlue = 1;
var ColorGreen = 2;
var Color;
(function (Color) {
    Color[Color["Red"] = 0] = "Red";
    Color[Color["Blue"] = 1] = "Blue";
    Color[Color["Green"] = 2] = "Green";
})(Color || (Color = {}));
;
var backGroundColor = Color.Green;
