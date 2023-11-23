import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{
    private JButton button;
    public MyFrame() 
    {
        setTitle("Button Example");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        button=new JButton("Click Me");
        button.addActionListener(this);
        add(button);
        setLocationRelativeTo(null);
        setVisible(true);
        setLayout(null);
    }

    @Override

    public void actionPerformed(ActionEvent e) 
    {
        System.out.println("Button clicked!");
    }
    public static void main(String[] args) 
    {
    MyFrame m1=new MyFrame();
    MyFrame m2=new MyFrame();
    }
}
