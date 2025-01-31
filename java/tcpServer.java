import java.io.*;
import java.net.*;

public class tcpServer {
    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(5000)) { // 5000 is the port number
            System.out.println("Server is listening...");
            while (true) {
                Socket socket = serverSocket.accept(); // Accept connection
                System.out.println("Client connected.");

                // Create streams
                DataInputStream input = new DataInputStream(socket.getInputStream());
                DataOutputStream output = new DataOutputStream(socket.getOutputStream());

                int number = input.readInt(); // Read number from client
                String result = (number % 2 == 0) ? "Even" : "Odd";

                output.writeUTF(result); // Send result to client
                System.out.println("Processed number: " + number);

                // Close the socket
                socket.close();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
