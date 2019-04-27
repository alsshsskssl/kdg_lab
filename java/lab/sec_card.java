import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class sec_card extends JFrame{
	JLabel q_tf;
	JTextField submit_tf;
	JButton q_create;
	JButton submit_btn;
	JLabel space;
	int[][] card = {{1,2,3,4,5,6,7,8,9},
		{10,11,12,13,14,15,16,17,18},
		{19,20,21,22,23,24,25,26,27},
		{28,29,30,31,32,33,34,35,36},
		{37,38,39,40,41,42,43,44,45},
		{46,47,48,49,50,51,52,53,54},
		{55,56,57,58,59,60,61,62,63},
		{64,65,66,67,68,69,70,71,72},
		{73,74,75,76,77,78,79,80,81}};
		
	sec_card(){
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setTitle("sec_card");
		this.setSize(300,150);
		this.setLayout(new FlowLayout());
		
		q_tf = new JLabel("       Question       ");
		q_create = new JButton("Create Secure Number");
		submit_tf = new JTextField("input your number");
		space = new JLabel("                                                    ");
		submit_btn = new JButton("Submit");

		q_create.addActionListener(new btActionListener_qbt());

		this.add(q_tf);
		this.add(q_create);
		this.add(space);
		this.add(submit_tf);
		this.add(submit_btn);

		setVisible(true);
		setResizable(false);
	}
	public class btActionListener_qbt implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton q_create = (JButton)e.getSource();
			q_tf.setText("dfgdf");
		}
	}

	public static void main(String[] args){
		sec_card card = new sec_card();
	}
}
