import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.FileWriter;

public class f_in_out{
	public static void main(String[] args){
		//File read!!
		
		try{
			File file = new File("data");
			FileReader filereader = new FileReader(file);
			int ch = 0;
			while((ch=filereader.read())!=-1)
				System.out.print((char)ch);
		}catch(FileNotFoundException e){
			System.out.println(e);
		}catch(Exception e){

		}
		
		/*
		//File write!!
		try{
			File file = new File("data");
			FileWriter fw = new FileWriter(file);
			fw.write("new data!");
			fw.close();
		}catch(Exception e){
			System.out.println("File write err\n");
			System.out.println(e);
		}
		*/
	}
}
