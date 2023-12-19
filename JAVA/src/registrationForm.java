import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

class myFrame extends JFrame implements ActionListener
{
    private JLabel label1;
    private JLabel label2;
    private JLabel label3;
    private JTextField textField1;
    private JTextField textField2;
    private JTextField textField3;
    private JButton add;
    private JButton update;
    private JButton delete;
    private JButton show;
    private JTable table;
    private DefaultTableModel tablemodel;

    myFrame()
    {
        label3=new JLabel("ID");
        label1=new JLabel("Name");
        label2=new JLabel("Age");
        textField1=new JTextField(20);
        textField2=new JTextField(20);
        textField3=new JTextField(20);
        add=new JButton("Add");
        update=new JButton("Update");
        delete=new JButton("Delete");
        show=new JButton("Show");
        tablemodel=new DefaultTableModel();  
        table=new JTable(tablemodel);
        JScrollPane scrollPane=new JScrollPane(table);

        setTitle("Registration From");
        setLayout(new FlowLayout());
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        add(label3);
        add(textField1);
        add(label1);
        add(textField2);
        add(label2);
        add(textField3);
        add(add);
        add(update);
        add(delete);
        add(show);
        add(table);
        add(scrollPane);

        table.setModel(tablemodel);
        add.addActionListener(this);
        update.addActionListener(this);
        delete.addActionListener(this);
        show.addActionListener(this);

        pack();
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==add)
        {
            String url = "jdbc:mysql://localhost:3306/java";
            String username = "root";
            String password = "12345";
        try 
        {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection(url, username, password);
            
            int id=Integer.parseInt(textField1.getText());
            int age=Integer.parseInt(textField3.getText());
            String name=textField2.getText();
        
            Statement statement = connection.createStatement();
            String query="INSERT INTO STUDENTS VALUES ("+id+",'"+name+"',"+age+")";
            statement.executeUpdate(query);
            System.out.println("Record added Sucessfully...");
            connection.close();
        }
        catch (ClassNotFoundException c) 
        {
            System.err.println("Failed to load JDBC driver.");
            c.printStackTrace();
        }
        catch (SQLException s)
        {
            System.err.println("Failed to establish a connection to the database.");
            s.printStackTrace();
        }
        }

        if(e.getSource()==update)
        {
            String url="jdbc:mysql://localhost:3306/java";
            String username="root";
            String password="12345";

            try
            {
                Class.forName("com.mysql.cj.jdbc.Driver");
                Connection connection=DriverManager.getConnection(url, username, password);
                int id=Integer.parseInt(textField1.getText());
                String name=textField2.getText();
                int age=Integer.parseInt(textField3.getText());

                String query="UPDATE STUDENTS SET ID="+id+" ,NAME="+"'"+name+"' , AGE="+age+" WHERE ID="+id;
                Statement statement=connection.createStatement();
                statement.executeUpdate(query);
                System.out.println("Record Updated Sucessfully...");
                connection.close();
            }
            catch (ClassNotFoundException c) 
            {
            System.err.println("Failed to load JDBC driver.");
            c.printStackTrace();
            }
            catch (SQLException s)
            {
            System.err.println("Failed to establish a connection to the database.");
            s.printStackTrace();
            }
        }

        if(e.getSource()==delete)
        {
            String url="jdbc:mysql://localhost:3306/java";
            String username="root";
            String password="12345";

            try
            {
                Class.forName("com.mysql.cj.jdbc.Driver");
                Connection connection=DriverManager.getConnection(url, username, password);

                int id=Integer.parseInt(textField1.getText());
                String query="DELETE FROM STUDENTS WHERE ID="+id;

                Statement statement=connection.createStatement();
                statement.executeUpdate(query);

                System.out.println("Record deleted sucessfully...");
                connection.close();
            }
            catch (ClassNotFoundException c) 
            {
            System.err.println("Failed to load JDBC driver.");
            c.printStackTrace();
            }
            catch (SQLException s)
            {
            System.err.println("Failed to establish a connection to the database.");
            s.printStackTrace();
            }

        }

        if(e.getSource()==show)
        {
        try 
        {
        while(tablemodel.getRowCount() > 0) 
        {
            tablemodel.removeRow(0);
        }
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/java", "root", "12345");
            Statement statement = connection.createStatement();
            ResultSet resultSet = statement.executeQuery("SELECT * FROM students");

            ResultSetMetaData metaData = resultSet.getMetaData();
            int columnCount = metaData.getColumnCount();

            for (int i = 1; i <= columnCount; i++) 
            {
                tablemodel.addColumn(metaData.getColumnName(i));
            }

            while (resultSet.next()) 
            {
                Object[] row = new Object[columnCount];
                for (int i = 1; i <= columnCount; i++) 
                {
                    row[i - 1] = resultSet.getObject(i);
                }
                tablemodel.addRow(row);
            }

            System.out.println("Record showm sucesfully...");
            resultSet.close();
            statement.close();
            connection.close();
        } 
        catch (Exception ex) 
        {
            JOptionPane.showMessageDialog(this, "Error loading data: " + ex.getMessage());
        }
    }
}
}

public class registrationForm
{
     public static void main(String[] args)
    {
        myFrame f=new myFrame();
    }
 }