class students
{
    private String name;
    private String instructor;
    private static int StudentCount;

   public void addStudents(String name,String instructor)
    {
        this.name=name;
        this.instructor=instructor;
        StudentCount++;
        System.out.println("Student Added Sucessfully: \n name: "+name+"instructor: "+instructor+" Number of students: "+StudentCount);
    }

    public void removeStudents()
    {
        StudentCount--;
        System.out.println("Studen removed sucessfully: "+" number of students: "+StudentCount);
    }
}

public class UniversityCourse
{
     public static void main(String[] args)
    {
         students s=new students();
         s.addStudents("hitesh", "rizwan");
         s.addStudents("hitesh", "feeroz");
         s.removeStudents();
    }
}

/*Scenario: You are building a class to represent a university course. The course
has various attributes like name, instructor, and a list of enrolled students.
Define a Course class with private fields for name, instructor, and a list of
students. Implement methods to add and remove students from the course.
Explain how encapsulation ensures that the list of students is accessed and
modified safely. */