import java.lang.Runtime;
import java.lang.Process;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class ExecExample{
	
	public static void main(String[] args){
		try{
			Cmd("ls");
		}catch(IOException e){
			System.out.println("dasds");
		}
	}
	
	public static void Cmd(String command) throws IOException{
		String s;
		//String command = "ls";
		Runtime rt = Runtime.getRuntime();
		Process p = rt.exec(command);
		BufferedReader stdInput = new BufferedReader(new InputStreamReader(p.getInputStream()));
		String str_result = new String("");
		while((s=stdInput.readLine()) != null){
			//System.out.println(s);
			str_result += s;
		}
		System.out.println(str_result);
		System.out.println(str_result.length());
		
	}
}
