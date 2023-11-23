import  javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class CalculatorAPp extends JFrame implements ActionListener
{
    private JTextField inputfild1;
    private JTextField inputfild2;
    private JButton button;
    private JTextField resultfild;
    public CalculatorAPp()
    {

        setTitle("my calculator");
        setSize(400,200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        setVisible(true);



        inputfild1=new JTextField(10);
        inputfild2=new JTextField(10);
        button=new JButton("Calculate");
        resultfild=new JTextField(10);



        resultfild.setEditable(false);

        add(inputfild1);
        add(inputfild2);
        add(button);
        add(resultfild);
        inputfild1.setBounds(70,20,70,30);
        inputfild2.setBounds(150,20,70,30);
        button.setBounds(70,60,70,40);
        resultfild.setBounds(150,60,70,30);

        button.addActionListener(this);
    }
    @Override
    public void actionPerformed(ActionEvent e)
    {
        try {
            double num1=Double.parseDouble(inputfild1.getText());
            double num2=Double.parseDouble(inputfild2.getText());
            double result=num1+num2;
            resultfild.setText(Double.toString(result));
        }
        catch (NumberFormatException EX)
        {
            resultfild.setText("invalid");
        }

    }
    public static void main(String[] args) {
        CalculatorAPp c=new CalculatorAPp();
        c.setVisible(true);
    }


}