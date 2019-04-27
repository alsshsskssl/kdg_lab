package TestScanner;

import java.util.Scanner;

class TestScanner{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("input String : ");
		String str = sc.nextLine();
		System.out.println(str.toString());
	}
}
