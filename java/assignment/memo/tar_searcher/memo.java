import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.Scanner;
import java.io.*;
import java.io.IOException;
import java.util.Date;
import java.util.Calendar;
import java.lang.Runtime;
import java.lang.Process;
import java.io.BufferedReader;
import java.io.InputStreamReader;
public class memo extends JFrame{
	JFileChooser jfc;
	TextArea ta;
	String b1 = new String();
	String b2 = new String();
	String b3 = new String();
	String b4 = new String();
	String path_buf = new String("");
	int path_buf_length = 0;
	memo(){
		c_menu();
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setTitle("KDGs Memo");
		this.setSize(800,800);
		ta = new TextArea();
			
		this.add(ta);
		
		this.setVisible(true);

		ta.addKeyListener(new KeyListener(){
		public void keyPressed(KeyEvent e){
			if(e.getKeyCode()==KeyEvent.VK_F1){
				String temp = new String(ta.getText());
				temp = temp.concat(b1);
				ta.setText(temp);
			}
			else if(e.getKeyCode()==KeyEvent.VK_F2){
				String temp = new String(ta.getText());
				temp = temp.concat(b2);
				ta.setText(temp);
			}
			else if(e.getKeyCode()==KeyEvent.VK_F3){
				String temp = new String(ta.getText());
				temp = temp.concat(b3);
				ta.setText(temp);
			}
			else if(e.getKeyCode()==KeyEvent.VK_F4){
				String temp = new String(ta.getText());
				temp = temp.concat(b4);
				ta.setText(temp);
			}
			else if(e.getKeyCode()==KeyEvent.VK_F5){
				String temp = new String(ta.getText());
				Calendar cal = Calendar.getInstance();
				Date today = new Date();
				temp = temp.concat(""+today);
				/*
				temp = temp.concat("Y"+cal.get(Calendar.YEAR));
				temp = temp.concat(" M"+cal.get(Calendar.MONTH));
				temp = temp.concat(" D"+cal.get(Calendar.DAY_OF_MONTH));
				temp = temp.concat(" "+cal.get(Calendar.HOUR_OF_DAY)+":");
				temp = temp.concat(cal.get(Calendar.MINUTE)+":");
				temp = temp.concat(cal.get(Calendar.SECOND)+"");
				*/
				ta.setText(temp);
			}


		}
		public void keyReleased(KeyEvent e){

		}
		public void keyTyped(KeyEvent e){

		}		
		});
	}
	
	void c_menu(){
		JMenuBar mb = new JMenuBar();
		JMenu file = new JMenu("File");
		
		JMenuItem nnn = new JMenuItem("New");
		nnn.addActionListener(new New());
		file.add(nnn);
		
		JMenuItem open = new JMenuItem("Open");
		open.addActionListener(new Open_file());
		file.add(open);
		
		JMenuItem save = new JMenuItem("Save");
		file.add(save);

		JMenuItem save_as = new JMenuItem("Save_as");
		save_as.addActionListener(new Save_as());
		file.add(save_as);

		file.addSeparator();
		
		JMenuItem exit = new JMenuItem("Exit");
		exit.addActionListener(new Exit());
		file.add(exit);

		JMenu edit = new JMenu("Edit");
		JMenuItem buf = new JMenuItem("buf");
		buf.addActionListener(new MenuActionListener());
		edit.add(buf);
		
		JMenuItem time_date = new JMenuItem("Time/Date (F5)");
		time_date.addActionListener(new time_date());
		edit.add(time_date);

		JMenu Page = new JMenu("Page");
		JMenuItem page_up = new JMenuItem("page up");
		page_up.addActionListener(new Page_up());
		Page.add(page_up);

		JMenuItem page_down = new JMenuItem("page down");
		page_down.addActionListener(new Page_down());
		Page.add(page_down);

		

		JMenu format = new JMenu();

		mb.add(file);
		mb.add(edit);
		mb.add(Page);
		setJMenuBar(mb);
	}
	public void open_file(String file_path){
		String S = new String("");	//result String
		try{
			//path_buf = file_path;
			FileReader fr = new FileReader(file_path);
			boolean first = true;		//이녀석 뭐지?
			int c;
			while(true){
				c = fr.read();
				if(c==-1)
					break;
				S=S.concat(String.valueOf((char)c));
			}
			//System.out.println(S);
			fr.close();
		}catch(Exception e){
			e.printStackTrace();
		}
		ta.setText(S);
	}

	public String cmd(String command){
		//String command = new String("ls");
		String str_result = new String("");
		String s;
		Runtime rt = Runtime.getRuntime();
		try{
			Process p = rt.exec(command);
			BufferedReader stdInput = new BufferedReader(new InputStreamReader(p.getInputStream()));
			stdInput = new BufferedReader(new InputStreamReader(p.getInputStream()));
			while((s=stdInput.readLine()) != null){
				str_result += s;
			}
			}catch(IOException e){
		}

		System.out.println(str_result);
		return str_result;
	}

	public class Page_up implements ActionListener{
		public void actionPerformed(ActionEvent evt){
			String test = new String("");
			String resu = new String("");
			test += "tar -tvf ";
			test += path_buf;
			resu = cmd(test);
			System.out.println(resu.length());
			System.out.println("결과 : ");
			System.out.println(resu);
		}
	}
	public class Page_down implements ActionListener{
		public void actionPerformed(ActionEvent evt){
			System.exit(0);
		}
	}

	public class MenuActionListener implements ActionListener{
		public void actionPerformed(ActionEvent evt){
			buf_interface bi = new buf_interface();
		}
	}
	public class time_date implements ActionListener{
		public void actionPerformed(ActionEvent evt){
			String temp = new String(ta.getText());
			Calendar cal = Calendar.getInstance();
			Date today = new Date();
			temp = temp.concat(""+today);
			ta.setText(temp);
		}
	}
	public class Exit implements ActionListener{
		public void actionPerformed(ActionEvent evt){
			System.exit(0);
		}
	}
	public class New implements ActionListener{
		public void actionPerformed(ActionEvent evt){
			ta.setText("");
		}
	}
	public class Open_file implements ActionListener{	//Open
		public void actionPerformed(ActionEvent evt){
			
			jfc = new JFileChooser();
			jfc.showOpenDialog(null);
			String S = new String("");	//result String
			
			try{
				String file_path = new String(jfc.getSelectedFile().getPath());
				path_buf = file_path;
				S += "tar xvfzp ";
				S += file_path;
				S += " ";
				//S += search;
				cmd(S);
				//FileReader fr = new FileReader(file_path);
			}catch(Exception e){
				e.printStackTrace();
			}
			ta.setText(S);
			
		}
	}
	public class Save_as implements ActionListener{		//Save_as
		public void actionPerformed(ActionEvent evt){
			jfc = new JFileChooser();
			jfc.showSaveDialog(null);
			System.out.println(jfc.getSelectedFile());
			String S = jfc.getSelectedFile().getPath();
			String temp = new String(ta.getText());
			
			try{	
				File file = new File(S);

				FileWriter fw = new FileWriter(S,false);

				fw.write(temp);
				fw.flush();
				fw.close();
			}catch(Exception e){
				e.printStackTrace();
			}
		}
	}
	
	public static void main(String[] args){
		memo frame = new memo();	
	}
	class buf_interface extends JFrame{
		JTextField buf_tf0;
		JTextField buf_tf1;
		JTextField buf_tf2;
		JTextField buf_tf3;

		buf_interface(){
			this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			this.setTitle("Set");
			this.setSize(300,170);
			this.setLayout(new FlowLayout());
			//JPanel p = new JPanel(new GridLayout(2,5));
			this.setResizable(false);
			JButton bt = new JButton("OK");	
			bt.addActionListener(new Close_bt());
			JLabel buf_lb0 = new JLabel("buf0");	buf_tf0 = new JTextField(20);
			JLabel buf_lb1 = new JLabel("buf1");    buf_tf1 = new JTextField(20);
			JLabel buf_lb2 = new JLabel("buf2");    buf_tf2 = new JTextField(20);
			JLabel buf_lb3 = new JLabel("buf3");    buf_tf3 = new JTextField(20);
			
			this.add(buf_lb0);	this.add(buf_tf0);
			this.add(buf_lb1);	this.add(buf_tf1); 
			this.add(buf_lb2);	this.add(buf_tf2); 
			this.add(buf_lb3);	this.add(buf_tf3); 
			this.add(bt);
	
			this.setVisible(true);
		}
		public class Close_bt implements ActionListener{
			public void actionPerformed(ActionEvent e){
				b1 = buf_tf0.getText();
				b2 = buf_tf1.getText();
				b3 = buf_tf2.getText();
				b4 = buf_tf3.getText();
				
				setVisible(false);
			}
		}
	}
}
