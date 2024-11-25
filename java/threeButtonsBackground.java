import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class threeButtonsBackground extends JFrame implements ActionListener {

    JButton red, green, blue;

    public threeButtonsBackground() {

        setTitle("Three Buttons Color Change");
        setSize(500, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        red = new JButton("Red");
        green = new JButton("Green");
        blue = new JButton("Blue");

        add(red);
        add(green);
        add(blue);

        red.addActionListener(this);
        green.addActionListener(this);
        blue.addActionListener(this);

        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("Red")) {
            getContentPane().setBackground(Color.RED);
            System.out.println("Red is Pressed");
        } else if (e.getActionCommand().equals("Green")) {
            getContentPane().setBackground(Color.GREEN);
            System.out.println("Green is Pressed");
        } else if (e.getActionCommand().equals("Blue")) {
            getContentPane().setBackground(Color.BLUE);
            System.out.println("Blue is Pressed");
        }
    }

    public static void main(String[] args) {
        new threeButtonsBackground();
    }
}
