import java.io.*;
import java.net.*;
import java.util.*;

public class tcpClient {
    public static void main(String[] args) {
        try (Socket socket = new Socket("localhost", 5000)) { // Connect to server on port 5000
            System.out.println("Connected to the server.");
            Scanner scan = new Scanner(System.in);
            // Create streams
            DataOutputStream output = new DataOutputStream(socket.getOutputStream());
            DataInputStream input = new DataInputStream(socket.getInputStream());

            System.out.println("Enter a number: ");
            int number = scan.nextInt();
            output.writeInt(number); // Send number to server

            String response = input.readUTF(); // Get server response
            System.out.println("Server response: " + response);

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
