abstract class animal
{
    public abstract void walk();
    public abstract void eat();
    public int i=5;

}

class cat extends animal
{
    public void walk()
    {
        System.out.println(i);
        System.out.println("it walks on 4 legs");
    }
    public void eat()
    {
        System.out.println("it eats meat");
    }
}
public class abstractCode
{
     public static void main(String[] args)
    {
         cat c=new cat();
         c.walk();
         c.eat();

    }
}