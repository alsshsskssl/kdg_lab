import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class Server extends JFrame{
	JTextArea ta;
	JTextField tf;
	JButton bt;
	public void makeSwing(){
		System.out.println("set_Frame");
		JFrame frame = new JFrame();
		ta = new JTextArea(25,25);
		tf = new JTextField(20);
		bt = new JButton("chat");

		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setTitle("Server");
		frame.setSize(320,450);
		frame.setLayout(new FlowLayout());
		
		frame.add(ta);
		frame.add(bt);
		frame.add(tf);

		bt.addActionListener(new sendActionListener());

		frame.setResizable(false);
		frame.setVisible(true);
	}
		
	
	private ServerSocket serverSocket;
	private Socket clientSocket;

	private DataInputStream dataInputStream;
	private DataOutputStream dataOutputStream;
	
	public Server(){
		//System.out.println("loadData is "+loadData("4444"));
		makeSwing();
		makeServer();
		setStream();
		//dataSend_2(loadData("4444"));
		dataRecv();	//run recv Thread
		dataSend();	//run send Thread
		//serverClose();
		dataSend_2(loadData("4444"));
	}
	/*
	public void saveData(String s_value,String fname){
		System.out.println("saveData()!!!");
		File file = new File(fname);
		FileWriter fw;
		try{
			fw = new FileWriter(file,true);
			fw.write(s_value);
			fw.flush();
			fw.close();
		}catch(Exception e){

		}

	}
	*/
	public void makeServer(){
		try{
			serverSocket = new ServerSocket(4444);
			clientSocket = serverSocket.accept();
			String loadData = new String(loadData("4444"));

			System.out.println("Connected");
			System.out.println(loadData);
			ta.setText(loadData);

		} catch(Exception e){

		}
	}
	public String loadData(String fname){
		String S = new String("");

		try{
			File file = new File(fname);
			FileReader filereader = new FileReader(file);
			int cnt =0;
			while((cnt=filereader.read())!=-1){
				S+=(char)cnt;
				System.out.print((char)cnt);
			}

			return S;
				//System.out.print((char)cnt);
		}catch(FileNotFoundException e){
			//System.out.println("there is a no Data\n");
			return S;
		}catch(Exception e){
			return S;
		}
	}
	
	public void serverClose(){
		try{
			serverSocket.close();
			clientSocket.close();
			dataInputStream.close();
			dataOutputStream.close();
		}catch(Exception e){

		}
	}

	public void setStream(){
		try{
			dataInputStream = new DataInputStream(clientSocket.getInputStream());
			dataOutputStream = new DataOutputStream(clientSocket.getOutputStream());
		}catch(Exception e){

		}

	}
	
	public void dataRecv(){
		new Thread(new Runnable(){	
			@Override
			public void run(){
				while(true){
					try{
						String S = dataInputStream.readUTF();
						if(S.equals("/exit")){
							System.out.println("Bye~^^\n");
							try{
								File file = new File("4444");
								FileWriter fw = new FileWriter(file);
								fw.write(ta.getText());
								fw.close();
							}catch(Exception e){

							}
							dataSend_2("/close");
							serverClose();
							System.exit(0);
						}
						System.out.println(S);
						String temp = ta.getText();
						temp+=S;
						temp+="\n";
						//saveData(temp,"4444");	//4444 is file name
						ta.setText(temp);
					}catch(Exception e){
	
					}
				}
			}	
		}).start();
		/*
		try{
			return dataInputStream.readUTF();
		}catch(Exception e){

		}
		*/
	}
	public void dataSend_2(String S){
		try{
			dataOutputStream.writeUTF(S);
			//saveData(S,"4444");
		}catch(Exception e){
			
		}
	}

	public void dataSend(){
		new Thread(new Runnable(){
			Scanner sc = new Scanner(System.in);
			@Override
			public void run(){
				while(true){
					String S = sc.nextLine();
					try{	
						//dataSend_2(S);
						/*	
						dataOutputStream.writeUTF(S);
						saveData(S,"4444");
					*/
					}catch(Exception e){
	
					}
				}
			}
		}).start();
		/*
		try{
			dataOutputStream.writeUTF(S);
		}catch(Exception e){

		}
		*/
	}
	public class sendActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			String S = tf.getText();
			tf.setText("");
			String temp = ta.getText();
			temp+=S;
			temp+="\n";
			ta.setText(temp);
			System.out.println(temp);
			dataSend_2(S);
			/*
			try{
				dataOutputStream.writeUTF(S);
				//saveData(S,"4444");
			}catch(Exception ex){

			}
			*/

		}
	}

	public static void main(String[] args){
		new Server();
	}
}
