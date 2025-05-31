import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class labexam implements ActionListener{
JFrame f;
JTextField t1;
JButton b1;

public labexam(){

f = new JFrame();
f.setLayout(new FlowLayout());
f.setSize(400,500);
t1 = new JTextField(20);

t1.setText("Today is java lab exam.");
b1 = new JButton("Click");
f.add(t1);
f.add(b1);

b1.addActionListener(this);

f.setVisible(true);
}

@Override
public void actionPerformed(ActionEvent e){
t1.setFont(new Font("Arial", Font.BOLD, 18));
t1.setBackground(Color.GREEN);
t1.setForeground(Color.BLUE);
}

public static void main(String[] args){
new labexam();
}

}
