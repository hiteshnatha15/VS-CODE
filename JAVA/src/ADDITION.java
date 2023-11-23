import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ADDITION extends JFrame implements ActionListener
{
    private JTextField textField1;
    private JTextField textField2;
    private JLabel label;
    private JButton button;
    private JTextField resultTextField; 

    public ADDITION()
    {
        setTitle("SUM OF NUMBERS");
        setSize(300, 300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        setVisible(true);

        label=new JLabel("ENTER THE NUMBERS");
        textField1=new JTextField(10);
        textField2=new JTextField(10);
        button=new JButton("CALCULATE");
        resultTextField=new JTextField(10);

        resultTextField.setEditable(false);

        add(label);
        add(textField1);
        add(textField2);
        add(button);
        add(resultTextField);
        label.setVisible(true);

        button.addActionListener(this);
    }

    @Override

    public void actionPerformed(ActionEvent e)
    {
        try
        {
            int a=Integer.parseInt(textField1.getText());
            int b=Integer.parseInt(textField2.getText());
            int c=a+b;
            resultTextField.setText(Integer.toString(a+b));
        }
        
        catch(NumberFormatException n)
        {
            resultTextField.setText("ENTER NUMBERS ONLY");
        }
    }

     public static void main(String[] args)
    {
         ADDITION a=new ADDITION();
    }
   
}