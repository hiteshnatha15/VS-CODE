class details
{
    private String name;
    private int rollno;

    public details(String name,int rollno)
    {
        this.name=name;
        this.rollno=rollno;
    }

    public String getname()
    {
        return name;
    }

    public int getrollno()
    {
        return rollno;
    }

    public void setname(String name)
    {
        this.name=name;
    }

    public void setrollno(int rollno)
    {
        this.rollno=rollno;
    }
}
public class aa
{
     public static void main(String[] args)
    {
         details d=new details("hitesh natha", 121);
         System.out.println(d.getname());
         System.out.println(d.getrollno());
         d.setname("mohit");
         d.setrollno(123);
         System.out.println(d.getname());
         System.out.println(d.getrollno());
    }
}