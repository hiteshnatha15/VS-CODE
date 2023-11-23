import java.util.Scanner;
class TV 
{
    int channel=1;
    int volume=1;
    
    public void displayMenu() {
        System.out.println("*****WELCOME TO TV REMOTE*****");
        System.out.println("CHOOSE THE FOLLOWING OPTIONS:");
        System.out.println("1.ENTER CHANNEL NUMBER.");
        System.out.println("2.CHANNEL+");
        System.out.println("3.CHANNEL-");
        System.out.println("4.VOLUME+");
        System.out.println("5.VOLUME-");
        System.out.println("6.MUTE VOLUME.");
        System.out.println("7.TURN OFF.");
    }

    public void setChannel(int newChannel) {
        if (newChannel >= 1 && newChannel <= 250) {
            channel = newChannel;
            System.out.println("CHANNEL CHANGED TO " + channel);
        } else {
            System.out.println("CHANNEL OUT OF BOUND.");
        }
    }

    public void increaseChannel() {
        if (channel >= 1 && channel <= 250) {
            channel++;
            System.out.println("CHANNEL CHANGED TO " + channel);
        } else {
            System.out.println("CHANNEL OUT OF BOUND.");
        }
    }

    public void decreaseChannel() {
        if (channel >= 1 && channel <= 250) {
            channel--;
            System.out.println("CHANNEL CHANGED TO " + channel);
        } else {
            System.out.println("CHANNEL OUT OF BOUND.");
        }
    }

    public void increaseVolume() {
        if (volume > 0 && volume <= 100) {
            volume++;
            System.out.println("VOLUME INCREASED BY 1.");
            System.out.println("CURRENT VOLUME: " + volume);
        } else {
            System.out.println("VOLUME OUT OF BOUND.");
        }
    }

    public void decreaseVolume() {
        if (volume > 0 && volume <= 100) {
            volume--;
            System.out.println("VOLUME DECREASED BY 1.");
            System.out.println("CURRENT VOLUME: " + volume);
        } else {
            System.out.println("VOLUME OUT OF BOUND.");
        }
    }

    public void muteVolume() {
        if (volume >= 1 && volume <= 100) {
            volume = 0;
            System.out.println("VOLUME MUTED.");
            System.out.println("CURRENT VOLUME: " + volume);
        }
    }
}

public class tvRemoteUsingClass 
{
    public static void main(String[] args) {
        System.out.println("*****TV REMOTE*****");
        System.out.println("DO YOU WANT TO TURN ON THE REMOTE?");
        System.out.println("PRESS 1 TO TURN ON.");
        Scanner sc = new Scanner(System.in);
        int start = sc.nextInt();

        if (start == 1) {
            TV remote = new TV();
            Scanner sc1 = new Scanner(System.in);

            while (true) {
                remote.displayMenu();
                int option = sc1.nextInt();

                switch (option) {
                    case 1:
                        System.out.println("ENTER THE CHANNEL NUMBER:");
                        int newChannel = sc1.nextInt();
                        remote.setChannel(newChannel);
                        break;
                    case 2:
                        remote.increaseChannel();
                        break;
                    case 3:
                        remote.decreaseChannel();
                        break;
                    case 4:
                        remote.increaseVolume();
                        break;
                    case 5:
                        remote.decreaseVolume();
                        break;
                    case 6:
                        remote.muteVolume();
                        break;
                    case 7:
                        System.out.println("TURNING OFF.");
                        System.exit(0);
                    default:
                        System.out.println("INVALID CHOICE.");
                        break;
                }
            }
        }
    }
}
