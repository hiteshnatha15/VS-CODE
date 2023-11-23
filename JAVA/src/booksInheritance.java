import java.util.Scanner;

class Book 
{
    private String title;
    protected String author;
    public double price;

    public Book(String title, String author, double price) 
    {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public void displayBookInfo() 
    {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: $" + price);
    }
}

class FictionBook extends Book 
{
    private String genre;

    public FictionBook(String title, String author, double price, String genre)
    {
        super(title, author, price);
        this.genre = genre;
    }

    @Override

    public void displayBookInfo()
    {
        super.displayBookInfo();
        System.out.println("Genre: " + genre);
    }
}

class ScienceFictionBook extends FictionBook 
{
    private String subgenre;

    public ScienceFictionBook(String title, String author, double price, String genre, String subgenre) 
    {
        super(title, author, price, genre);
        this.subgenre = subgenre;
    }

    @Override

    public void displayBookInfo()
    {
        super.displayBookInfo();
        System.out.println("Subgenre: " + subgenre);
    }
}

class MysteryBook extends Book 
{
    private String detective;

    public MysteryBook(String title, String author, double price, String detective) 
    {
        super(title, author, price);
        this.detective = detective;
    }

    @Override

    public void displayBookInfo()
    {
        super.displayBookInfo();
        System.out.println("Detective: " + detective);
    }
}

public class booksInheritance
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the title of the Fiction book: ");
        String fictionTitle = scanner.nextLine();
        System.out.print("Enter the author of the Fiction book: ");
        String fictionAuthor = scanner.nextLine();
        System.out.print("Enter the price of the Fiction book: ");
        double fictionPrice = scanner.nextDouble();
        scanner.nextLine();
        System.out.print("Enter the genre of the Fiction book: ");
        String fictionGenre = scanner.nextLine();

        System.out.print("Enter the subgenre of the Science Fiction book: ");
        String scienceFictionSubgenre = scanner.nextLine();

        System.out.print("Enter the detective of the Mystery book: ");
        String mysteryDetective = scanner.nextLine();

        Book[] books = new Book[3];
    
        books[0] = new FictionBook(fictionTitle, fictionAuthor, fictionPrice, fictionGenre);
        books[1] = new ScienceFictionBook(fictionTitle, fictionAuthor, fictionPrice, fictionGenre, scienceFictionSubgenre);
        books[2] = new MysteryBook(fictionTitle, fictionAuthor, fictionPrice, mysteryDetective);

        for (int i = 0; i < books.length; i++) 
    {
        Book book = books[i];
        System.out.println("\nBook Information:");
        book.displayBookInfo();
    }
    scanner.close();
    }
}
