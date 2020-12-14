var number = 1;
var count = 2;
function doSomething() {
    for (var i = 0; i < 5; i++) {
        console.log(i);
    }
    for (var j = 0; j < 5; j++) {
        console.log(j);
    }
    // var is scoped to the nearest function
    console.log('finally', i);
    // let is scoped to the nearest code block
    console.log('finally', j);
}
doSomething();
