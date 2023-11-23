class pet
{
    protected void befriendly()
    {
        System.out.println("hi");
    }
    protected void play()
    {
        System.out.println("bro");
    }
    pet()
    {
        befriendly();
        play();
    }
}

interface robotPet
{
    void befriendly();
    void play();
}

class dog extends pet implements robotPet
{
    dog()
    {
        super();
    }
    public void befriendly()
    {
        System.out.println("yes it is friendly");
    }

    public void play()
    {
        System.out.println("yes it plays");
    }

}
public class interfaceCode
{
     public static void main(String[] args)
    {
         dog d=new dog();
         d.befriendly();
         d.play();
    }
}