import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class test_swing extends JFrame{
	test_swing(){
		JFrame frame = new JFrame();
		frame.setTitle("swing practice");
		frame.setSize(200,200);
		frame.setVisible(true);	
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLayout(null);
		JButton button = new JButton("Play");
		button.setLocation(50,10);
		button.setSize(70,20);
		button.addActionListener(new MyActionListener());
		frame.add(button);
	}
	public class MyActionListener implements ActionListener {
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			if(button.getText().equals("Play"))
				button.setText("Stop");
			else
				button.setText("Play");
		}
	}

	public static void main(String[] args){
		test_swing frame = new test_swing();
	}
}
