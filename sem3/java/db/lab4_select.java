import java.sql.*;

class lab4_select {
    public static void main(String[] args) {
        // Corrected syntax
        final String uname = "root";  // Use double quotes for strings
        final String pwd = "19288889";       // Empty password
        final String url = "jdbc:mysql://localhost:3306/ncit"; // Correct URL format

        try {
            // Load MySQL Driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Connect to the database
            Connection cn = DriverManager.getConnection(url, uname, pwd);
            Statement st = cn.createStatement();

            // SQL query
            String qr = "USE student; SELECT AVG(marks) FROM student1";
            ResultSet r = st.executeQuery(qr);

            // Retrieve and display result
            if (r.next()) {
                System.out.println("Average = " + r.getFloat(1));
            } else {
                System.out.println("No data found.");
            }

            // Close connection
            cn.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

