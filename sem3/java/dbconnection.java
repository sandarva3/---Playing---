// java -cp .:/usr/share/java/mysql-connector-java-9.1.0.jar dbconnection

import java.sql.*;

class dbconnection{
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/labdb"; // Replace testdb with your DB name
        String user = "root"; // Your MySQL username
        String password = "123"; // Your MySQL password

        try {
            // Load JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");
            
            // Establish Connection
            Connection conn = DriverManager.getConnection(url, user, password);
            System.out.println("Connected to MySQL!");

            // Insert Data
            String sql = "INSERT INTO users (id, name) VALUES (?, ?)";
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setInt(1, 4);
            stmt.setString(2, "testuser");
            stmt.executeUpdate();

            System.out.println("Data inserted successfully!");

            // Close Connection
            stmt.close();
            conn.close();
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
        }
    }
}
