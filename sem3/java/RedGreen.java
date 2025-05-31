// A GUI application with two buttons: red and green. When Red is pressed then change Green button's background color to Red, and Vice Versa.
// Also a message displaying which button is pressed.



import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


class RedGreen extends JFrame implements ActionListener{
  
JButton red, green;
  
public RedGreen(){
  setSize(400, 400);
  red = new JButton("Red");
  green = new JButton("Green");
  add(red);
  add(green);
  setLayout(new FlowLayout());
  setVisible(true);
  red.addActionListener(this);
  green.addActionListener(this);
}

public void actionPerformed(ActionEvent e){
  if(e.getActionCommand().equals("Red")){
      green.setBackground(Color.RED);
      System.out.println("Red is Pressed");
    }
    else{
      red.setBackground(Color.GREEN);
      System.out.println("Green is Pressed");
    }
}

public static void main(String[] args){
  new RedGreen();
}

}
