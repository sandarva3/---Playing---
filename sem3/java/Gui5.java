// Mouse Event
// Two textfields, the first should display the coordinate of the mouse in the screen. Second should display if mouse outside or inside frame. Also put tooltiptext.


import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Gui5 implements MouseListener, MouseMotionListener{
JFrame f;
JLabel l1, l2;

public Gui5(){
  f = new JFrame();
  f.setSize(400,500);
  f.setLayout(new FlowLayout());
  
  l1 = new JLabel();
  l2 = new JLabel();
  
  l1.setToolTipText("coord");
  l2.setToolTipText("in out");
  
  f.add(l1);
  f.add(l2);
  f.setVisible(true);
  
  f.addMouseListener(this);
  f.addMouseMotionListener(this);
}


public void mouseMoved(MouseEvent e){
  String val = "X: "+e.getX()+"Y: "+e.getY();
  l1.setText(val);
}


public void mouseEntered(MouseEvent e){
  l2.setText("IN");
}


public void mouseExited(MouseEvent e){
  l2.setText("OUT");
}

public void mousePressed(MouseEvent e) {}
public void mouseReleased(MouseEvent e) {}
public void mouseClicked(MouseEvent e) {}
public void mouseDragged(MouseEvent e) {}

public static void main(String[] args){
  new Gui5();
}
}
