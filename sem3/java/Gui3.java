// Two buttons, if one is pressed, Background color of another button is changed accordingly.

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Gui3 implements ActionListener{
  JFrame f;
  JButton red, blue;
  
  public Gui3(){
    f = new JFrame();
    f.setSize(400,500);
    f.setLayout(new FlowLayout());
    
    red = new JButton("Red");
    blue = new JButton("Blue");
    
    red.addActionListener(this);
    blue.addActionListener(this);
    
    f.add(red);
    f.add(blue);
    
    f.setVisible(true);
  }
  
  @Override
  public void actionPerformed(ActionEvent e){
    String val = e.getActionCommand();
    
    if(val.equals("Red")){
      blue.setBackground(Color.RED);
      System.out.println("Red Button is pressed.");
    }
    else{
      red.setBackground(Color.BLUE);
      System.out.println("Blue button is pressed.");
    }
  }
  
  public static void main(String[] args){
    new Gui3();
  }
}
