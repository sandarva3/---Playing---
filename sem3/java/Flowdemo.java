import java.awt.*;
import javax.swing.*;

class Flowdemo {
    public Flowdemo() {
        JFrame f = new JFrame("Flow Layout Demo");
        f.setSize(400, 400);
        JButton[] btn = new JButton[6];
        for (int i = 0; i < 6; i++) {
            btn[i] = new JButton("B" + (i + 1));
            f.add(btn[i]);
        }
        f.setLayout(new FlowLayout(FlowLayout.LEFT));
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Ensure application exits on close
    }

    public static void main(String[] args) {
        new Flowdemo();
    }
}

