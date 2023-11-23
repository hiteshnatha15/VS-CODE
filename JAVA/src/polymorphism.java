class a
{
    public static int display(int a)
    {
        System.out.println("null parameters");
        return 0;
    }

    public static int display(int a,int b)
    {
        System.out.println("are the parameters");
        return 0;
    }
}

public class polymorphism
{
     public static void main(String[] args)
    {
         a and=new a();
         a.display(3);
         a.display(10,20);
    }
}