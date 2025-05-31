// 3 text fields, and 2 buttons(+,-).  In first 2 text field, let user add input and, based on the button he clicks perform operation and show the result in 3rd text field.


import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Gui4 implements ActionListener{

JFrame f;
JButton plus, minus;
JTextField i1, i2, i3;

public Gui4(){
  f = new JFrame();
  f.setSize(400,500);
  f.setLayout(new FlowLayout());
  
  plus = new JButton("+");
  minus = new JButton("-");
  
  i1 = new JTextField(3);
  i2 = new JTextField(3);
  i3 = new JTextField(5);
  
  f.add(i1);
  f.add(i2);
  f.add(plus);
  f.add(minus);
  f.add(i3);
  
  plus.addActionListener(this);
  minus.addActionListener(this);
  
  f.setVisible(true);
  
}

@Override
public void actionPerformed(ActionEvent e)
{
  String val = e.getActionCommand();
  if(val.equals("+"))
  {
    int i1v = Integer.parseInt(i1.getText());
    int i2v = Integer.parseInt(i2.getText());
    i3.setText(String.valueOf(i1v + i2v));
  }
  else{
    int i1v = Integer.parseInt(i1.getText());
    int i2v = Integer.parseInt(i2.getText());
    i3.setText(String.valueOf(i1v - i2v));
  }
}

public static void main(String[] args){
new Gui4();
}
}

