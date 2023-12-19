import java.io.*;
import java.util.*;

public class io_file
{
    public static void main(String[] args) throws FileNotFoundException
    {
        File file=new File("vit.txt");
        if(file.exists())
        {
            System.out.println("file found! ");
        }
        else
        {
            System.out.println("File not found! ");
        }

        Scanner sc=new Scanner(file);
        while(sc.hasNext())
        {
            String txt=sc.next();
            System.out.print(txt+" "); 
        }
        sc.close();

        try(PrintWriter write=new PrintWriter(file)) 
        {
            write.println("bye");
        } 
        catch(FileNotFoundException e) 
        {
            e.printStackTrace();
        }

        System.out.println(file.exists());
        System.out.println(file.length());
        System.out.println(file.canRead());
        System.out.println(file.canWrite());
        System.out.println(file.isDirectory());
        System.out.println(file.isAbsolute());
        System.out.println(file.isHidden());
        System.out.println(file.getAbsolutePath());
        System.out.println(file.lastModified());
    }
}