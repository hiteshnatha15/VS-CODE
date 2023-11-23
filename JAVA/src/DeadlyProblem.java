interface A
{
   public default void display()
   {
    System.out.println("hi");
   }
}

interface B extends A
{
    
}

interface C extends A
{
    
}

public class DeadlyProblem implements B,C
{
     public static void main(String[] args)
    {
         DeadlyProblem d=new DeadlyProblem();
         d.display();
    }
}