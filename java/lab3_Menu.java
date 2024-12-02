import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


class lab3_Menu extends JFrame{
  
  public lab3_Menu()
  {
    setSize(400,500);
    JMenuBar bar = new JMenuBar();
    setJMenuBar(bar);
    
    JMenu file = new JMenu("File");
    bar.add(file);
    
    JMenu edit = new JMenu("Edit");
    bar.add(edit);
    
    JMenu nw = new JMenu("New");
    file.add(nw);
    
    JMenuItem one = new JMenuItem("One");
    nw.add(one);
    
    JMenuItem save = new JMenuItem("Save");
    file.add(save);
    
    file.addSeparator();
    
    JMenuItem exit = new JMenuItem("Exit");
    file.add(exit);
    
    setVisible(true);
    
  }
    
   public static void main(String[] args){
    new lab3_Menu();
  }
}


//write a java GUI program in which there'd be a frame of some size, a text text field where user can enter a text, 
//a few buttons: cut, copy. There should be another text field, around which there should be another button : paste.

//when user enters something on the first text field, if the 'cut' button is clicked then the text should be cutted from that text field, 
//and when user clicks 'paste' around another text field, the cutted text should be pasted into that button.
