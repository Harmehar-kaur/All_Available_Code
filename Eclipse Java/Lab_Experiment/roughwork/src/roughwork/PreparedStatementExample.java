package roughwork; 
import java.sql.*;
public class PreparedStatementExample {
	   public static void main(String args[]) throws SQLException {
	      //Registering the Driver
	      DriverManager.registerDriver(com.mysql.jdbc.Driver@1f31ad9);

	      //Getting the connection
	      String mysqlUrl = "jdbc:mysql://localhost/testdb";
	      Connection con = DriverManager.getConnection(mysqlUrl, "root", "password");
	      System.out.println("Connection established......");

	      //Creating a Prepared Statement
	      String query = "INSERT INTO Employees(Name, Salary, Location) VALUES (?, ?, ?)";
	      PreparedStatement pstmt = con.prepareStatement(query);

	      pstmt.setString(1, "Amit");
	      pstmt.setInt(2, 3000);
	      pstmt.setString(3, "Hyderabad");

	      pstmt.setString(1, "Kalyan");
	      pstmt.setInt(2, 4000);
	      pstmt.setString(3, "Vishakhapatnam");

	      pstmt.setString(1, "Renuka");
	      pstmt.setInt(2, 5000);
	      pstmt.setString(3, "Delhi");

	      pstmt.setString(1, "Archana");
	      pstmt.setInt(2, 15000);
	      pstmt.setString(3, "Mumbai");

	      int num = pstmt.executeUpdate();
	      System.out.println("Rows inserted ....");
	   }
	}
