import java.util.Scanner;

public class FLIGHTTICKET 
{
    private static int totalSeats=100;
    private static int availableSeats=totalSeats;

    public static void main(String[] args) 
    {
        Scanner scanner=new Scanner(System.in);
       while (true) 
        {
            System.out.println("Available Seats: "+availableSeats);
            if (availableSeats==0) 
            {
                System.out.println("Sorry, no seats available.");
                break;
            }
            System.out.print("Enter the number of seats to book (0 to quit): ");
            int seatsToBook=scanner.nextInt();
            if (seatsToBook ==0) 
            {
                System.out.println("Exiting the program.");
                break;
            }
            boolean booked = bookSeats(seatsToBook);
            if (booked) 
            {
                System.out.println("Booked "+seatsToBook+" seats successfully.");
            }
            else 
            {
                System.out.println("Not enough available seats. Please try again.");
            }
        }

        scanner.close();
    }

    private static boolean bookSeats(int seatsToBook) 
    {
        if (seatsToBook<=availableSeats) 
        {
            availableSeats-=seatsToBook;
            return true;
        }
        return false;
    }
}
