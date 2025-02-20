// 3 text fields, and 2 buttons(+,-).  In first 2 text field, let user add input and, based on the button he clicks perform operation and show the result in 3rd text field.

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Gui4 implements ActionListener{
  JFrame f;
  JButton plus, minus;
  JTextField i1, i2, r;
  
  public Gui4(){
    f = new JFrame();
    f.setSize(400,500);
    f.setLayout(new FlowLayout());
    
    i1 = new JTextField(5);
    i2 = new JTextField(5);
    r = new JTextField(10);
    
    plus = new JButton("+");
    minus = new JButton("-");
    
    plus.addActionListener(this);
    minus.addActionListener(this);
    
    
    f.add(i1);
    f.add(i2);
    f.add(plus);
    f.add(minus);
    f.add(r);
    
    f.setVisible(true);
  }
  
  @Override
  public void actionPerformed(ActionEvent e){
    String val = e.getActionCommand();
    int op1 = Integer.parseInt(i1.getText());
    int op2 = Integer.parseInt(i2.getText());
    
    if (val.equals("+")){
      r.setText(String.valueOf(op1 + op2)); // TextField only accepts string as text, so we have to convert int back to string.
    }
    else{
      r.setText(String.valueOf(op1 - op2));
    }
  }
  
  public static void main(String[] args){
    new Gui4();
  }
}
    
    
