import java.io.*;
import java.util.*;
public class countLinesInFile
{
     public static void main(String[] args) throws FileNotFoundException
    {
        Scanner sc=new Scanner(System.in);
        String FilePath;
        int counter=0;
        System.out.println("Enter the name of the file:");
        FilePath =sc.nextLine();

        File file=new File(FilePath);
        Scanner input=new Scanner(file);

        while(input.hasNextLine())
        {   
            String line=input.nextLine();
            counter++;
        }
        input.close();
        System.out.println("The File has "+counter+" lines.");
    }
}       