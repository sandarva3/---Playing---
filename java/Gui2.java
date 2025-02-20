// Three buttons with a color name, when a button is clicked it changes the background color of that button accordingly.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Gui2 implements ActionListener{
  JFrame f;
  JButton b1,b2,b3;
  
  public Gui2(){
    f = new JFrame();
    f.setLayout(new FlowLayout());
    f.setSize(400,500);
    
    b1 = new JButton("Red");
    b2 = new JButton("Blue");
    b3 = new JButton("Green");
    
    b1.addActionListener(this);
    b2.addActionListener(this);
    b3.addActionListener(this);
    
    f.add(b1);
    f.add(b2);
    f.add(b3);
    
    f.setVisible(true);
  }
  
  @Override
  public void actionPerformed(ActionEvent e){
    String val = e.getActionCommand();
    if(val.equals("Red")){
      b1.setBackground(Color.RED);
    }
    else if(val.equals("Blue")){
      b2.setBackground(Color.BLUE);
    }
    else{
      b3.setBackground(Color.GREEN);
    }
  }
  
  public static void main(String[] args){
    new Gui2();
  }
}
