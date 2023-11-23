class increment
{
    private static int counter;
    private static String college;
    increment()
    {
        counter++;
        System.out.println(counter);
        college="IIT";
    }

    public static void college()
    {
        college="VIT";
        System.out.println(college);
    }
}

public class StaticCode
{
     public static void main(String[] args)
    {
         increment i=new increment();
         i.college();
         increment j=new increment();
         j.college();
         increment k=new increment();
         k.college();
    }
}