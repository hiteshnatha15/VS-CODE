class Addition
{
    private int a;
    private int b;
    Addition(int a,int b)
    {
       this.a=a;
       this.b=b; 
    }

    public void sum()
    {
        System.out.println("the sum is: "+(a+b));
    }
}

public class Encapsulation
{
     public static void main(String[] args)
    {
         Addition a=new Addition(4, 6);
         a.sum();
    }
}
