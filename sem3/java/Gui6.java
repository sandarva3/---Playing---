// MENU PROGRAM
// IT has text area
// IT has menu, and menu have items: select all, cut, copy, paste. Clicking each item will function accordingly with text area.


import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Gui6 implements ActionListener
{
  JFrame f;
  JMenuBar b;
  JMenu m;
  JMenuItem sa, cut, cp, ps, ex;
  JTextArea ta;
  
  public Gui6()
  {
    f = new JFrame();
    f.setSize(400, 500);
    f.setLayout(new FlowLayout());
    
    b = new JMenuBar();
    f.setJMenuBar(b);
    
    m = new JMenu("menu");
    b.add(m);
    
    sa = new JMenuItem("select all");
    cut = new JMenuItem("cut");
    cp = new JMenuItem("copy");
    ps = new JMenuItem("paste");
    ex = new JMenuItem("exit");
    
    m.add(sa);
    m.add(cut);
    m.add(cp);
    m.add(ps);
    m.add(ex);
    
    ta = new JTextArea("Enter text here");
    ta.setBounds(150,150,200,200);
    
    f.add(ta);
    f.setVisible(true);
    
    sa.addActionListener(this);
    cut.addActionListener(this);
    cp.addActionListener(this);
    ps.addActionListener(this);
    ex.addActionListener(this);
    
  }
  
  public void actionPerformed(ActionEvent e)
  {
    String val = e.getActionCommand();
    
    if(val.equals("select all"))
    {
      ta.selectAll();
    }
    else if(val.equals("cut"))
    {
      ta.cut();
    }
    else if(val.equals("copy"))
    {
      ta.copy();
    }
    else if(val.equals("paste"))
    {
      ta.paste();
    }
    else{
      System.exit(0);
    }
  }
  
  public static void main(String[] args){
    new Gui6();
  }
}
