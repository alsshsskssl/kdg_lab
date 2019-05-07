import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.Random;
import javax.swing.JOptionPane;

public class sec_card extends JFrame{
	JLabel q_tf;	//문제 문구
	JTextField submit_tf;	//제출입력창
	JButton q_create;	//문자열 생성 버튼
	JButton submit_btn;	//제출 버튼
	JLabel space;	//공백
	JLabel comment;	//input your number
	Random random = new Random();
	int[] location = new int[6];
	int[][] card = {{1,2,3,4,5,6,7,8,9},	//보안카드
		{10,11,12,13,14,15,16,17,18},
		{19,20,21,22,23,24,25,26,27},
		{28,29,30,31,32,33,34,35,36},
		{37,38,39,40,41,42,43,44,45},
		{46,47,48,49,50,51,52,53,54},
		{55,56,57,58,59,60,61,62,63},
		{64,65,66,67,68,69,70,71,72},
		{73,74,75,76,77,78,79,80,81}};
		
	sec_card(){	//생성자 (swing 디자인)
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	//x누르면 꺼지게
		this.setTitle("sec_card");
		this.setSize(300,180);	//프레임 크기
		this.setLayout(new FlowLayout());	//기본 레이아웃 설정
		
		q_tf = new JLabel("       Question       ");
		q_create = new JButton("Create Secure Number");
		comment = new JLabel("Input your number :");
		submit_tf = new JTextField(10);

		space = new JLabel("                                                   ");
		submit_btn = new JButton("Submit");

		q_create.addActionListener(new btActionListener_qbt());
		submit_btn.addActionListener(new btActionListener_sbt());
		this.add(q_tf);
		this.add(q_create);
		this.add(space);
		this.add(comment);
		this.add(submit_tf);
		this.add(submit_btn);

		setVisible(true);
		setResizable(false);
	}
	public class btActionListener_qbt implements ActionListener{	//문제출력 버튼 액션리스너
		public void actionPerformed(ActionEvent e){
			JButton q_create = (JButton)e.getSource();
			int temp;
			for(int i=0;i<6;i++){
				temp = random.nextInt(9);
				location[i] = temp;
			}
			q_tf.setText(""+location[0]+location[1]+location[2]+location[3]+location[4]+location[5]);	//문제 출력 문자열
		}
	}
	public class btActionListener_sbt implements ActionListener{	//제출 버튼 액션리스너
		public void actionPerformed(ActionEvent e){
			int clear = 3;
			String input = new String("");
			input = submit_tf.getText();
			String[] temp_S = new String[3];
			temp_S[0] = "";
			temp_S[1] = "";
			temp_S[2] = "";
			int temp =0;
			for(int i=0;i<3;i++){
				for(int j=0;j<2;j++){
					temp_S[i] += input.charAt(temp++);
				}
			}
			int temp_int[] = new int[3];
			for(int i=0;i<3;i++){
				temp_int[i] = Integer.parseInt(temp_S[i]);
			}

			int temp2 = 0;
			for(int i=0;i<3;i++){
				if(temp_int[i]==card[location[temp2++]][location[temp2++]])
					clear--;
			}
			JOptionPane jop = new JOptionPane();	//결과창 선언
			if(clear==0){
				jop.showMessageDialog(null,"인증에 성공하셨습니다!","인증여부",jop.INFORMATION_MESSAGE);	//인증성공
			}
			else{
				jop.showMessageDialog(null,"인증에 실패하였습니다..","인증여부",jop.ERROR_MESSAGE);	//인증실패
			}
		}
	}

	public static void main(String[] args){
		sec_card card = new sec_card();	//클래스 생성 -> sec_card() 생성자 호출
	}
}
