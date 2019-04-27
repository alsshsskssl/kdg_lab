import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class study_swing extends JFrame{
	JTextField tf;
	JButton[] bt;
	study_swing(){
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setTitle("Calculator");
		this.setSize(300,170);
		this.setLayout(new FlowLayout());
		
		tf = new JTextField(24);	//TextField
		JPanel p1 = new JPanel();	//bt
		p1.setLayout(new GridLayout(4,4));
		
		bt = new JButton[16];
		bt[0] = new JButton("2->10");	bt[1] = new JButton("10->2");	bt[2] = new JButton("/");	bt[3] = new JButton("*");
		bt[4] = new JButton("7");	bt[5] = new JButton("8");	bt[6] = new JButton("9");	bt[7] = new JButton("-");
		bt[8] = new JButton("4");	bt[9] = new JButton("5");	bt[10] = new JButton("6");	bt[11] = new JButton("+");
		bt[12] = new JButton("1");	bt[13] = new JButton("2");	bt[14] = new JButton("3");	bt[15] = new JButton("=");
		for(int i=2;i<15;i++)
			bt[i].addActionListener(new btActionListener());
		bt[0].addActionListener(new bt2ActionListener());
		bt[1].addActionListener(new bt2ActionListener());
		for(int i=0;i<16;i++)
			p1.add(bt[i]);
		
		this.add(tf);
		this.add(p1);
		
		setResizable(false);
		setVisible(true);
	}
	public class btActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			tf.setText(""+tf.getText()+button.getText());
		}
	}
	public class bt2ActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			if(button.getText().equals("2->10")){
				String temp = tf.getText();
				tf.setText(""+calc(temp));
			}else{
				int temp = Integer.parseInt(tf.getText());
				tf.setText(""+calc2(temp));
			}
		}
	}
	
	int calc(String s){
		int temp=0;
		for(int i=0;i<s.length();i++){
			if(i==0)
				temp+=s.charAt(i)-'0';
			else
				temp=temp*2+(s.charAt(i)-'0');
		}
		
		return temp;
	}
	String calc2(int n){
		String s = new String("");
		for(int i=0;;i++){
			if(n==1){
				s = s.concat("1");
				break;
			}
			else{
				if(n%2==0){
					s = s.concat("0");
					n=n/2;
				}
				else{
					s = s.concat("1");
					n = (n-1)/2;
				}
			}
		}
		String temp = new String("");
		boolean check = false;
		for(int i=s.length()-1;i>=0;i--){
			if(s.charAt(i)=='1')
				check = true;
			if(check==true)
				if(s.charAt(i)=='1')
					temp = temp.concat("1");
				else
					temp = temp.concat("0");
		}
		
		return temp;
	}

	
	public static void main(String[] args){
		study_swing frame = new study_swing();
	}
}
