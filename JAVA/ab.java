import java.util.*;
class university
{
    private String name;
    private String instructor;
    static int StudentCount;
    private List <String> StudentRolled;

    public university(String name,String instructor)
    {
        this.name=name;
        this.instructor=instructor;
        this.StudentRolled=new ArrayList<>();
    }
    public void addStudent(String name)
    {
        StudentRolled.add(name);
    }
    public void removeStudent()
    {
        StudentRolled.remove(name);
    }
    public List<String> getStudentRolled()
    {
        return StudentRolled;
    }
}
public class ab
{
     public static void main(String[] args)
    {
         university u=new university("hitesh", "mohit");
         u.addStudent("hitesh");
         u.addStudent("mohit");
         u.removeStudent();
        System.out.println(u.getStudentRolled());
    }
}