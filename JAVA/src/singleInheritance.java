class a
{
    a()
    {
        System.out.println("this is a base class");
    }
}
class b extends a
{
    b()
    {
        System.out.println("this is a child class of class a");
    }
}
class c extends a
{
    c()
    {
        System.out.println("this is a child class of class a");
    }
}
public class singleInheritance
{
 public static void main(String[] args)
    {
         c bo=new c();
    }
}