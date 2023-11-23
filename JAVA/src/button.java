import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class button extends JFrame implements ActionListener
{
    private JButton butt;
    public button()
    {
        setTitle("BUTTON");
        setSize(300,300);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
        butt=new JButton("click me");
        //butt.setBounds(70,60,70,40);
        butt.addActionListener(this);
        add(butt);
        
    }
    

    @Override
    public void actionPerformed(ActionEvent e)
    {
        System.out.println("BUTTON CLICKED");
    }
     public static void main(String[] args)
    {
         button b=new button();
         b.setVisible(true);
    }
}   