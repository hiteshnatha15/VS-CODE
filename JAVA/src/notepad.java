import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

class myFrame extends JFrame implements ActionListener
{
    myFrame()
    {
        setTitle("Notepad");
        setSize(300, 300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        setVisible(true);

        JMenuBar menu=new JMenuBar();
        JMenu file=new JMenu("File");
        JMenuItem fileNewMenuItem=new JMenuItem("New");
        JMenuItem fileOpenMenuItem=new JMenuItem("Open");
        JMenuItem fileSaveMenuItem=new JMenuItem("Save");
        JMenuItem fileSaveAsJMenuItem=new JMenuItem("Save As");
        JMenuItem fileExitJMenuItem=new JMenuItem("Exit");

        menu.add(fileNewMenuItem);
        menu.add(fileOpenMenuItem);
        menu.add(fileSaveMenuItem);
        menu.add(fileSaveAsJMenuItem);
        menu.add(fileExitJMenuItem);
        setJMenuBar(menu);

    }

    @Override
    public void actionPerformed(ActionEvent e)
    {

    }
}
public class notepad
{
     public static void main(String[] args)
    {
         
    }
}