// console.log("hello");
// console.log("jee");
// const rectangle = {
//   length: 1,
//   breadth: 2,

//   draw: function () {
//     console.log('draw');
//   },
// };

function createRectangle(length, breadth) {
  return (rectangle = {
    length: length,
    breadth: breadth,
    draw() {
      console.log("hi");
    },
  });
}
function Circle(length,breadth) {
  this.length = length;
  this.breadth = breadth;
  this.draw = function () {
    console.log("hello jee");
  };
}
let rectangle1 = createRectangle(5, 4);
let rectangle2 = createRectangle(7, 4);
let circle1=new Circle(9,6); 
