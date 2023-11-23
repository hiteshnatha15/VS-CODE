abstract class pet
{
    abstract void beFriendly();
    abstract void toPlay();

    public void eat()
    {
        System.out.println("THE ANIMAL EATS FOOD");
    }
}

class dog extends pet
{
    public void beFriendly()
    {
        System.out.println("yes dogs are of friendly nature");
    }

    public void toPlay()
    {
        System.out.println("yes, dogs are good to play");
    }

    @Override

    public void eat()
    {
        System.out.println("Dogs eat dogFood");
    }
}

public class U2Q8
{
     public static void main(String[] args)
    {
         dog d=new dog();
         d.beFriendly();
         d.toPlay();
         d.eat();
    }
}