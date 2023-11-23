import java.io.*;
import java.util.*;
public class WordFinderInFile
{
     public static void main(String[] args) throws FileNotFoundException
    {
        Scanner sc=new Scanner(System.in);
        String FilePath;
        String word;
        int counter=0;
        System.out.println("Enter the name of the file:");
        FilePath =sc.nextLine();
        System.out.println("Enter The Word you want to find in the file:");
        word=sc.nextLine();

        File file=new File(FilePath);
        Scanner input=new Scanner(file);

        while(input.hasNext())
        {
            String positionWord=input.next();
            if (positionWord.equals(word))
            {
                counter++;
            }
        }
        input.close();
        System.out.println(word +" is found "+counter+" times.");
    }
}