import java.io.File;
import java.util.Scanner;

public class detailsByFilePath 
{

    public detailsByFilePath() 
    {
        System.out.println("Enter File Name:");
        Scanner input = new Scanner(System.in);
        String filePath = input.nextLine();
        File file = new File(filePath);

        if (file.exists()) 
        {
            System.out.println("File Exists.");
            System.out.println("File size: " + file.length() + " bytes.");
            System.out.println("Last Modified on: " + new java.util.Date(file.lastModified()));
            System.out.println("Is it a Directory: " + file.isDirectory());
            System.out.println("Is it a File: " + file.isFile());
            System.out.println("Can it be read? " + file.canRead());
            System.out.println("Can it be written? " + file.canWrite());
            System.out.println("Is it absolute? " + file.isAbsolute());
            System.out.println("Is it hidden? " + file.isHidden());
            System.out.println("Absolute path is " +file.getAbsolutePath());
        }
        else 
        {
            System.out.println("File Not Exists.");
        }

        input.close();
    }

    public static void main(String[] args) 
    {
        new detailsByFilePath();
    }
}
