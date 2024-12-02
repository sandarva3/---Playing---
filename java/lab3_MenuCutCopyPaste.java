import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class lab3_MenuCutCopyPaste extends JFrame implements ActionListener{
JTextArea t;
JMenu menu;
JMenuItem sa,cut,cp,p,exit;
JMenuBar bar;
public lab3_MenuCutCopyPaste() {
	setSize(500,600);
	bar=new JMenuBar();
	setJMenuBar(bar);
	menu=new JMenu("Menu");
	bar.add(menu);
	sa=new JMenuItem("Select All");
	cut=new JMenuItem("Cut");
	cp=new JMenuItem("Copy");
	p=new JMenuItem("Paste");
	exit=new JMenuItem("Exit");
	menu.add(sa);
	menu.add(cut);
	menu.add(cp);
	menu.add(p);
	menu.addSeparator();
	menu.add(exit);

	t=new JTextArea();
	t.setBounds(150, 200,200,200);
	add(t);
	setLayout(null);
	setVisible(true);
	
	sa.addActionListener(this);
	cut.addActionListener(this);
	cp.addActionListener(this);
	p.addActionListener(this);
	exit.addActionListener(this);
	
}
public void actionPerformed(ActionEvent e) {
	String item=e.getActionCommand();
	if(item.equals("Select All")) {
		t.selectAll();
	}
	else if(item.equals("Cut")) {
		t.cut();
	}
	else if(item.equals("Copy")) {
		t.copy();
	}
	else if(item.equals("Paste")) {
		t.paste();
	}
	else {
		System.exit(0);
	}
}
public static void main(String[]args) {
	new lab3_MenuCutCopyPaste();
}
}
