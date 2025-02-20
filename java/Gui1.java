// A gui application with a text field and a button, when a button is clicked, it changes the text into uppercase.

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Gui1 implements ActionListener{
  JFrame f;
  JTextField t1;
  JButton b1;
  
  public Gui1(){
    f = new JFrame();
    f.setLayout(new FlowLayout());
    f.setSize(400, 500);
    
    t1 = new JTextField(20); // It needs a size parameter(columns).
    t1.setText("Today is feb 11, 2025");
    
    b1 = new JButton("Click");
    
    b1.addActionListener(this);
    
    f.add(t1);
    f.add(b1);
    f.setVisible(true);
  }
  
  @Override
  public void actionPerformed(ActionEvent e){
    t1.setText(t1.getText().toUpperCase());
  }
  
  public static void main(String[] args){
    new Gui1();
  }
  
}
