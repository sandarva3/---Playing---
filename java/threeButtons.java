import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


class threeButtons extends JFrame implements ActionListener{

JFrame f;
JButton red, green, blue;

public threeButtons(){
  f = new JFrame("Three buttons color change");
  f.setSize(500, 400);
  f.setLayout(new FlowLayout());
  f.setVisible(true);
  
  red = new JButton("Red");
  green = new JButton("Green");
  blue = new JButton("Blue");
  
  f.add(red);
  f.add(green);
  f.add(blue);
  
  red.addActionListener(this);
  green.addActionListener(this);
  blue.addActionListener(this);
  
  }
  
  public void actionPerformed(ActionEvent e){
    if(e.getActionCommand().equals("Red")){
        green.setBackground(Color.RED);
        blue.setBackground(Color.RED);
        System.out.println("Red is Pressed");
    }
    else if(e.getActionCommand().equals("Green")){
        red.setBackground(Color.GREEN);
        blue.setBackground(Color.GREEN);
        System.out.println("Green is Pressed");
    }
    else{
        red.setBackground(Color.BLUE);
        green.setBackground(Color.BLUE);
        System.out.println("Blue is Pressed");
    }
  }
  
    
  
  public static void main(String[] args){
    new threeButtons();
  }
  
  }
  
  
