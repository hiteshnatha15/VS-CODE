/*
 * You are working on a geometry calculator application that calculates the area of

different shapes, including squares, rectangles, and circles.
Create a class named ShapeCalculator with a method calculateArea() that takes
a parameter of type Shape. Implement subclasses for Square, Rectangle, and
Circle, each inheriting from an abstract class Shape. Use polymorphism to
calculate and display the area of various shapes through the ShapeCalculator
class.
 */

abstract class ShapeCalculator
 {  
    abstract void calculateArea();
 }

 class square extends ShapeCalculator
 {
    int side;
    square(int side)
    {
        this.side=side;
    }
    
    public void calculateArea()
    {
        System.out.println("area= "+side*side);
    }
 }
public class ae
{
     public static void main(String[] args)
    {
         
    }
}