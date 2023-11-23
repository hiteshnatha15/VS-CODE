import java.sql.*;

public class jdbc 
{
        public static void main(String[] args) 
        {
        String url = "jdbc:mysql://localhost:3306/aslot";
        String username = "root";
        String password = "12345";

        try {
            // Load the JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Establish the connection
            Connection connection = DriverManager.getConnection(url, username, password);

            // Use the connection here
            System.out.println("connection created");

            // Close the connection when done
            connection.close();
        } catch (ClassNotFoundException e) {
            System.err.println("Failed to load JDBC driver.");
            e.printStackTrace();
        } catch (SQLException e) {
            System.err.println("Failed to establish a connection to the database.");
            e.printStackTrace();
        }
    }
}
