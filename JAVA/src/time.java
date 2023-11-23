public class time
{
    public static void main(String[] args)
    {
         long time=System.currentTimeMillis();
         long second=(time/1000)%60;
         System.out.println("Second:"+second);
         long minute=(((time/1000)/60))%60;
         System.out.println("Minutes:"+minute);
         long hours=((time/1000)/3600)%24;
         System.out.println("Hours:"+hours);
         System.out.println("   \nINDIAN STANDARD TIME");
        System.out.println("Hours: "+((((time+19800000)/1000)/3600)%24)%12+" Minutes: "+(((time+19800000)/1000)/60)%60+" Seconds: "+((time+19800000)/1000)%60);
        
    }
}