// Pop up menu program.


import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Gui7 implements ActionListener, MouseListener{
  JFrame f;
  JLabel l1;
  JPopupMenu pop;
  JMenuItem a, b;
  
  public Gui7()
  {
    f = new JFrame();
    f.setSize(400, 500);
    f.setLayout(new FlowLayout());
    
    l1 = new JLabel();

    
    pop = new JPopupMenu();
    
    a = new JMenuItem("a");
    b = new JMenuItem("b");
    
    f.add(l1);
    f.add(pop);
    
    pop.add(a);
    pop.add(b);
    
    f.setVisible(true);
    
    f.addMouseListener(this);
    a.addActionListener(this);
    b.addActionListener(this);
    
  }
  
  public void mouseClicked(MouseEvent e)
  {
    pop.show(f, e.getX(), e.getY());
  }
  
  public void actionPerformed(ActionEvent e)
  {
    if(e.getSource() == a)
    {
      l1.setText("a is selected");
    }
    else
    {
      l1.setText("b is selected");
    }
  }
  
  public void mousePressed(MouseEvent e) {}
  public void mouseReleased(MouseEvent e) {}
  public void mouseEntered(MouseEvent e) {}
  public void mouseExited(MouseEvent e) {}
  
  public static void main(String[] args)
  {
    new Gui7();
  }
}
