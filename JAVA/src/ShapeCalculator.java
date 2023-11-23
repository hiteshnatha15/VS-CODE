abstract class calculate
{
    abstract double getArea();
}

class square extends calculate
{
    double side;
    public square(double side)
    {
        this.side=side;
    }

    @Override

    public double getArea()
    {
        return side*side;
    }
}

class rectangle extends calculate
{
    double length;
    double breadth;

    public rectangle(double length,double breadth)
    {
        this.length=length;
        this.breadth=breadth;
    }

    @Override

    public double getArea()
    {
        return length*breadth;
    }
}

class circle extends calculate
{
    double radius;

    public circle(double radius)
    {
        this.radius=radius;
    }
    
    @Override

    public double getArea()
    {
        return Math.PI*radius*radius;
    }
}

public class ShapeCalculator
{
     public static void main(String[] args)
    {   
         square s=new square(4);
         System.out.println(s.getArea());
         rectangle r=new rectangle(3.6,2.1);
         System.out.println(r.getArea());
         circle c=new circle(6.6);
         System.out.println(c.getArea());
    }
}





/*You are working on a geometry calculator application that calculates the area of

different shapes, including squares, rectangles, and circles.
Create a class named ShapeCalculator with a method calculateArea() that takes
a parameter of type Shape. Implement subclasses for Square, Rectangle, and
Circle, each inheriting from an abstract class Shape. Use polymorphism to
calculate and display the area of various shapes through the ShapeCalculator
class.*/