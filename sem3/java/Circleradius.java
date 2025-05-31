import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Circleradius implements ActionListener {

    JFrame f;
    JButton calculate;
    JTextField input;
    JLabel result, inputLabel;

    public Circleradius() {
    
        f = new JFrame("Circle Area Calculator");
        f.setSize(400, 200);
        f.setLayout(new FlowLayout());

        inputLabel = new JLabel("Enter radius: ");
        input = new JTextField(10); 
        calculate = new JButton("Calculate");
        result = new JLabel("Result: ");


        calculate.addActionListener(this);


        f.add(inputLabel);
        f.add(input);
        f.add(calculate);
        f.add(result);


        f.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {

            double radius = Double.parseDouble(input.getText());
            double area = Math.PI * radius * radius;  
            result.setText("Result: " + area);
    }

    public static void main(String[] args) {
        new Circleradius();
    }
}

