class A
{
    public void a1()
    {
        System.out.println("this is a1");
    }
}

class k extends A
{
    public void a1()
    { 
        System.out.println("this is a2");
    }
}
public class Exe
{
     public static void main(String[] args)
    {
         A a=new k();
         a.a1();
    }
}