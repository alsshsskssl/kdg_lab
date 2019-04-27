import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
public class Server {
       	public static void main(String[] args) throws IOException {
	       	ServerSocket serverSocket = null;
	       	try{ serverSocket = new ServerSocket(5555);
	       	}catch(IOException e){
		       	System.out.println("다음의 포트 번호에 연결할 수 없습니다 : 5555");
		       	System.exit(1);
	       	}
	       	Socket clientSocket = null;
	       	try{
		       	clientSocket = serverSocket.accept();
	       	}catch(IOException e){
		       	System.err.println("accept() 실패 ");
		       	System.exit(1);
	       	}
	       	PrintWriter out = new PrintWriter(clientSocket.getOutputStream(),true);
	       	BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
	       	String inputLine, outputLine;
	       	outputLine ="접속한 것을 환영한다 후후후";
	       	out.println(outputLine);
	       	while((inputLine = in.readLine())!=null){
		       	System.out.println("클라이언트가 한 말 : "+inputLine);
		       	outputLine = inputLine;
		       	out.println(outputLine);
		       	if(outputLine.equals("quit"))
			       	break;
	       	}
	       	out.close();
	       	in.close(); 
		clientSocket.close();
	       	serverSocket.close();
       	}
}
