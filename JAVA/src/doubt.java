class problem
{
    public void q1()
    {
        System.out.println("method 1");
    }

    public void q2()
    {
        System.out.println("method 2");
    }

    problem()
    {
        System.out.println("this is a constructor");
        q2();
    }
}

public class doubt
{
     public static void main(String[] args)
    {
         problem p=new problem();
         p.q1();
    }
}