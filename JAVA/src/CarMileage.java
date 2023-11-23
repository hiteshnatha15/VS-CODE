class car
{
    static private double CarMileage;
    static private int fuelQuantity;
    static private int distance;

    car(int fuelQuantity,int distance)
    {
        this.fuelQuantity=this.fuelQuantity+fuelQuantity;
        this.distance=this.distance+distance;
    }

    static void drive()
    {
        System.out.println("car current Mileage is: "+(distance/fuelQuantity)+" km/hr");
    }

}

public class CarMileage
{
     public static void main(String[] args)
    {
         car c=new car(2,100);
         car c1=new car(3,100);
         c.drive();
    }
}

/*You are building a class to represent a car. The car`s mileage should be kept

private and updated only when the car is driven.
Create a Car class with a private mileage field. Implement a drive() method that
updates the mileage based on the distance traveled. Describe how
encapsulation ensures that the mileage is accurate and tamper-proof. */