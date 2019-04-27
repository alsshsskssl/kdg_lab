import java.io.DataInputStream;
import java.io.DataOutputStream;
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
		makeSwing();
		makeServer();
		setStream();
		dataRecv();	//run recv Thread
		dataSend();	//run send Thread
		//serverClose();
	}

	public void makeServer(){
		try{
			serverSocket = new ServerSocket(4444);
			clientSocket = serverSocket.accept();
		} catch(Exception e){
		
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
						System.out.println(S);
						String temp = ta.getText();
						temp+=S;
						temp+="\n";
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

	public void dataSend(){
		new Thread(new Runnable(){
			Scanner sc = new Scanner(System.in);
			@Override
			public void run(){
				while(true){
					String S = sc.nextLine();
					try{		
						dataOutputStream.writeUTF(S);
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
			try{
				dataOutputStream.writeUTF(S);
			}catch(Exception ex){

			}
		}
	}

	public static void main(String[] args){
		new Server();
	}
}
