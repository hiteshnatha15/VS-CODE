/*Q.5 Build a file search utility that searches for files with a specific
extension (e.g., &quot;.txt&quot;) within a specified directory. List the file
names that match the criteria. */
import java.io.*;
import java.util.*;
public class searchingFileByExtension
{
     public static void main(String[] args) throws FileNotFoundException
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the path where you want to search the particular extension file:");
        String path=sc.nextLine();
        System.out.println("Enter the file Extension you want to search");
        String extension=sc.nextLine();
        File file=new File(path);

        File[] files = file.listFiles((dir, name) -> name.endsWith(extension));

        for(int i=0;i<files.length;i++)
        {
            System.out.println(files[i]);
        }
    }
}