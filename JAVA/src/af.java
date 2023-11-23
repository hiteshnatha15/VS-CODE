import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


class frame extends JFrame implements ActionListener
{
    private JFrame f;
    private JTextField t1;
    private JTextField t2;
    private JLabel l;
    private JButton b;

    frame()
    {
        setTitle("add two numbers");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(300, 300);
        setLayout(new FlowLayout());
        setVisible(true);
        t1=new JTextField(10);
        t2=new JTextField(10);
        l=new JLabel();
        b=new JButton("calculate");
        add(b);
        add(t1);
        add(t2);
        add(l);
        b.addActionListener(this);
    }
    @Override

    public void actionPerformed(ActionEvent e)
    {
        try
        {
            int a=Integer.parseInt(t1.getText());
            int b=Integer.parseInt(t2.getText());
            int c=a+b;
            l.setText(Integer.toString(c));
        }
        catch(NumberFormatException f)
        {
           l.setText("invalid number");
        }
    }
}
public class af
{
     public static void main(String[] args)
    {
        frame f=new frame();
        f.setVisible(true);        
    }
}