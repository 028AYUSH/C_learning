package day6;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
//import java.security.Key;

public class event extends Applet implements KeyListener{
	String msg="";
	int x=10,y=10;
	public void init(){
		addKeyListener(this);
		requestFocus();
	}
	@SuppressWarnings("deprecation")
	public void keyPressed(KeyEvent ke) {
		showStatus("key is pressed");
	}
	@SuppressWarnings({ "deprecation" })
	public void keyReleased(KeyEvent ke) {
		showStatus("key is realsed");
	}
	public void keyTyped(KeyEvent ke) {
		msg+=ke.getKeyChar();
		repaint();
	}
	public void paint(Graphics g1) {
		g1.drawString(msg, x, y);
	}
	
			

}
