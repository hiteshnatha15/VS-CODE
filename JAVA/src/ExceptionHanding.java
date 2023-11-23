import java.util.*;

import javax.swing.JOptionPane;

class divide
{
    int a;
    int b;

    public int divide(int a,int b) throws ArithmeticException
    {
        this.a=a;
        this.b=b;
        if(b==0)
        {
            throw new ArithmeticException("please enter a non-zero value");
        }

        return a/b;
    }
}

public class ExceptionHanding
{
     public static void main(String[] args)
    {
        do 
        {
            try
        {
            divide d=new divide();
            Scanner sc=new Scanner(System.in);
            System.out.println("enter the numerator to divide");
            Integer a=sc.nextInt();
            if(!(a instanceof Integer))
            {

            }
            System.out.println("enter the denominator to divide");
            Integer b=sc.nextInt();
            if(!(b instanceof Integer))
            {

            }
            System.out.println(d.divide(a,b));
        }
        catch(ArithmeticException e)
        {
            System.out.println(e.getMessage());
        }
        catch(NumberFormatException f)
        {
        System.out.println(f.getMessage());
        }
        finally
        {
            System.out.println("this will execute always");
        }
        }
        while (true);
        
    }
}