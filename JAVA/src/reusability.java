class base
{
    protected void check()
    {
        System.out.println("this is for check.");
    }
    base()
    {
        System.out.println("this is a base class constructor.");
    }
}
class derived extends base
{
    int a=10;
    derived()
    {
        System.out.println("this is a derived class constructor");
        System.out.println(a);
    }
}
class multilevel extends derived
{
    multilevel()
    {
        System.out.println("this is a multilevel constructor");
    }
}
public class reusability
{
    public static void main(String[] args)
    {
        multilevel d=new multilevel();    
        d.check();
        d.a=0;
        System.out.println(d.a);

    }
}