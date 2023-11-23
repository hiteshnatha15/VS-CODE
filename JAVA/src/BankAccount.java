import java.util.*;
class BankAccount
{   
    public static void main(String[] args)
    {
        System.out.println("*****wELCOME TO BANK*****");
        System.out.println("ENTER ACCOUNT NUMBER");
        Scanner acc=new Scanner(System.in);
        String accountNumber=acc.nextLine();
        System.out.println("ENTER ACCOUNT HOLDER NAME");
         Scanner name=new Scanner(System.in);
        String accountHolder=name.nextLine();
        double balance=0;
        while(true)
        {
        System.out.println("*****wELCOME TO BANK*****");
        System.out.println("CHOOSE ONE OF THE FOLLOWING OPERATIONS TO PERFORM:");
        System.out.println("1.DEPOSIT.");
        System.out.println("2.WITHDRAW.");
        System.out.println("3.GET BALANCE.");
        System.out.println("4.EXIT");
        Scanner sc=new Scanner(System.in);
        int option=sc.nextInt();

        switch (option) {
            case 1:
                {
                    double creditAmount;
                    System.out.println("ENTER AMOUNT TO BE CREDITED:");
                    Scanner sc1=new Scanner(System.in);
                    creditAmount=sc1.nextDouble(); 
                    if(creditAmount>0)
                    {
                        balance=balance+creditAmount;
                        System.out.println("AMOUNT SUCESSFULLY CREDITED RS."+creditAmount);
                        System.out.println("TOTAL BALANCE: "+balance);
                    }
                    else
                    {
                        System.out.println("INVALID AMOUNT ENTERED");
                    }
                    break;
                }
            case 2:
                {
                    double debitAmount;
                    System.out.println("ENTER AMOUNT TO BE DEBITED:");
                    Scanner sc2=new Scanner(System.in);
                    debitAmount=sc2.nextDouble(); 
                    if(debitAmount>0&&debitAmount<=balance)
                    {
                        balance=balance-debitAmount;
                        System.out.println("AMOUNT SUCESSFULLY DEBITED RS."+debitAmount);
                        System.out.println("TOTAL BALANCE: "+balance);
                    }
                    else
                    {
                        System.out.println("INVALID AMOUNT ENTERED");
                    }
                    break;
                }
                case 3:
                {
                    System.out.println("THE ACCOUNT BALANCE IS :"+balance);
                    break;
                }
                case 4:
                System.exit(0);
                break;

                default:
                System.out.println("INVALID CHOICE");
                break;
            }
        }
    }
}