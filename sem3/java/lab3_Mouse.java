// A GUI application: making a frame of certain size, and creating two lables inside it. The first label would display if the Mouse is inside or outside the Frame, and Second would 
// display the (x,y) coordinates of the mouse while it's inside the frame.



import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class lab3_Mouse implements MouseListener, MouseMotionListener{

JFrame f;
JLabel entry, coord;

public lab3_Mouse(){
  f = new JFrame();
  f.setSize(400,500);
  
  entry = new JLabel();
  entry.setToolTipText("In or Out");
  coord = new JLabel();
  coord.setToolTipText("X,Y Coordinate");
  
  f.add(entry);
  f.add(coord);
  
  f.setLayout(new FlowLayout());
  f.setVisible(true);
  
  f.addMouseListener(this);
  f.addMouseMotionListener(this);
}

public void mouseEntered(MouseEvent e){
  entry.setText("In");
}

public void mouseExited(MouseEvent e){
  entry.setText("Out");
}

public void mouseMoved(MouseEvent e){
  String xy = "x: " + e.getX() + ", " + "y: " + e.getY();
  coord.setText(xy);
}

public void mouseClicked(MouseEvent e) {}
public void mousePressed(MouseEvent e) {}
public void mouseReleased(MouseEvent e) {}
public void mouseDragged(MouseEvent e) {}


public static void main(String [] args){
  new lab3_Mouse();
}

}
