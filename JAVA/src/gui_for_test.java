import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class frame extends JFrame implements ActionListener
{
    private JLabel label1;
    private JLabel label2;
    private JTextField textField1;
    private JTextField textField2;
    private JTextField textField3;
    private JButton button;

    public frame()
    {
        setTitle("calculator");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        setVisible(true);
        
        label1=new JLabel("number1");
        label2=new JLabel("number2");
        textField1=new JTextField(10);
        textField2=new JTextField(10);
        textField3=new JTextField(10);
        button=new JButton("calculate");

        add(label1);
        add(label2);
        add(textField1);
        add(textField2);
        add(textField3);
        add(button);
        button.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        int a=Integer.parseInt(textField1.getText());
        int b=Integer.parseInt(textField2.getText());
        int c=a+b;
        textField3.setText(c+"");
    }
}
public class gui_for_test
{
     public static void main(String[] args)
    {
         frame f=new frame();
    }
}