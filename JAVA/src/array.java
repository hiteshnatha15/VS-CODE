import java.util.*;
public class array
{
    public static void main(String[] args)
    {
        int i;
        int total=0;
        Scanner sc=new Scanner(System.in);
        i=sc.nextInt();
        int array[]=new int[i];
        int burstTime[]=new int[i];
        for(int n=0;n<=i;n++)
        {
            System.out.println("ENTER THE VALUES");
            array[n]=sc.nextInt();
        }
        for(int n=0;n<=i;n++)
        {
            burstTime[n]=total+array[n];
        }
        for(int n=0;n<=i;n++)
        {
            System.out.println(""+burstTime[n]);
        }
    }
}