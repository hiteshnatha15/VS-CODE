import java.util.*;
public class tvremote
{
       public static void main(String[] args)
    {
        int channel=1;
        int volume=1;
        System.out.println("*****TV REMOTE*****");
        System.out.println("DO YOU WANT TO TURN ON THE REMOTE?");
        System.out.println("PRESS 1 TO TURN ON.");
        Scanner sc=new Scanner(System.in);
        int start=sc.nextInt();
        if(start==1)
        {
        while(true)
            {
                System.out.println("*****WELCOME TO TV REMOTE*****");
                System.out.println("CHOOSE THE FOLLOWING OPTIONS:");
                System.out.println("1.ENTER CHANNEL NUMBER.");
                System.out.println("2.CHANNEL+");
                System.out.println("3.CHANNEL-");
                System.out.println("4.VOLUME+");
                System.out.println("5.VOLUME-");
                System.out.println("6.MUTE VOLUME.");
                System.out.println("7.TURN OFF.");
                Scanner sc1=new Scanner(System.in);
                int option=sc1.nextInt();
                switch (option) 
                {
                    case 1:
                        {
                            System.out.println("ENTER THE CHANNEL NUMBER:");
                            Scanner sc2=new Scanner(System.in);
                            channel=sc2.nextInt();
                            if(channel>=1&&channel<=250)
                            {
                            System.out.println("CHANNEL CHANGED TO "+channel);
                            }
                            else
                            {
                                System.out.println("CHANNEL OUT OF BOUND.");
                            }
                            break;
                        }
                    case 2:
                        {
                            if(channel>=1&&channel<=250)
                            {
                            channel++;
                            System.out.println("CHANNEL CHANGED TO "+channel);
                            break;
                            }
                            else
                            {
                                System.out.println("CHANNEL OUT OF BOUND.");
                            }
                        }
                        case 3:
                        {
                            if(channel>=1&&channel<=250)
                            {
                            channel--;
                            System.out.println("CHANNEL CHANGED TO "+channel);
                            break;
                            }
                            else
                            {
                                System.out.println("CHANNEL OUT OF BOUND.");
                            }
                        }
                        case 4:
                        {
                            if(volume>=0&&volume<=100)
                            {
                            volume++;
                            System.out.println("VOLUME INCREASED BY 1.");
                            System.out.println("CURRENT VOLUME: "+volume);
                            break;
                            }
                            else
                            {
                                System.out.println("VOLUME OUT OF BOUND.");
                            }
                        }
                        case 5:
                        {
                            if(volume>=0&&volume<=100)
                            {
                            volume--;
                            System.out.println("VOLUME DECREASED BY 1.");
                            System.out.println("CURRENT VOLUME: "+volume);
                            break;
                            }
                            else
                            {
                                System.out.println("VOLUME OUT OF BOUND.");
                            }
                        }
                        case 6:
                        {
                            if(volume>=1&&volume<=100)
                            {
                            volume=0;
                            System.out.println("VOLUME MUTED.");
                            System.out.println("CURRENT VOLUME: "+volume);
                            break;
                            }
                        }
                        case 7:
                        {
                            System.exit(0);
                        }
                    default:
                        System.out.println("INVALID CHOICE.");
                        break;
                }
            }
        }
    }
}