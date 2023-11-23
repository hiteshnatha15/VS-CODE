import javax.swing.*;
import java.awt.*;

public class house extends JFrame 
{
    int x[] = {200, 400, 300};
    int y[] = {300, 300, 200};

    house() 
    {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(1000, 1000);
        setLocationRelativeTo(null);
        setVisible(true);

        JPanel panel = new JPanel() {
            @Override
            protected void paintComponent(Graphics g) 
            {
                super.paintComponent(g);
                g.setColor(Color.black);
                g.drawString("My New House", 50, 50);
                g.setColor(Color.green);
                g.fillRect(200, 300, 600, 400);
                g.setColor(Color.orange);
                g.fillPolygon(x, y, 3);
                 g.setColor(Color.blue);
                g.fillRect(500, 400, 200, 200);

    
                g.setColor(Color.black);
                g.drawLine(600, 400, 600, 600);
                g.drawLine(500, 500, 700, 500);
                g.setColor(Color.green);
                g.fillRect(200, 300, 200, 400);
                g.setColor(Color.white);
                g.fillRect(300, 200, 500, 100);

                                
                g.drawRect(200, 300, 200, 400);
                g.setColor(Color.orange);
                g.fillRect(225, 500, 150, 200);

                g.setColor(Color.red);
                g.fillOval(335, 600, 20, 20);
            }
        };
        add(panel);
    }
     public static void main(String[] args) 
    {
        house h = new house();
    }
}
