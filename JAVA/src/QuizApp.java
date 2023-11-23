import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Set;
public class QuizApp extends JFrame implements ActionListener
{
    private JLabel label1;
    private JButton button;
    private JLabel label2;

    public QuizApp()
    {
        setTitle("QuizApp");
        setSize(400, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        setVisible(true);

        label1=new JLabel("WHAT IS THE CAPITAL OF RAJASTHAN");
        button=new JButton("SHOW ANSWER");
        label2=new JLabel();

       add(label1);
       add(button);
       add(label2);

       button.addActionListener(this);
    }

    @Override

    public void actionPerformed(ActionEvent e)
    {
        label2.setText("JAIPUR");
    }

     public static void main(String[] args)
    {
         QuizApp s=new QuizApp();
         s.setVisible(true);
    }
}