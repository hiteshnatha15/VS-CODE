class car
{
    private int mileage;

    public void drive(int distanceTravelled)
    {
        if(distanceTravelled>0)
        {
            mileage=mileage+distanceTravelled;
            System.out.println("distance travelled: "+ distanceTravelled + "mileage: "+mileage);
        }
        else
        {
            System.out.println("distance canot be negative");
        }
    }

    public int getmileage()
    {
        return mileage;
    }
}

public class ac
{
     public static void main(String[] args)
    {
         car c=new car();
         c.drive(20);
         c.drive(50);
         System.out.println(c.getmileage());
    }
}

