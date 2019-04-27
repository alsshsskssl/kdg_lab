import java.util.Scanner;

class study_2{
	static int calc(String s){
		int temp=0;
		for(int i=0;i<s.length();i++){
			if(i==0)
				temp+=s.charAt(i)-'0';
			else
				temp=temp*2+(s.charAt(i)-'0');
		}
		return temp;
	}
	static String calc2(int n){
		String s = new String("");

		for(int i=0;;i++){
			if(n==1){
				s=s.concat("1");
				break;
			}
			else{
				if(n%2==0){
					s=s.concat("0");
					n=n/2;
				}
				else{
					s=s.concat("1");
					n=(n-1)/2;
				}
			}
		}
		String temp = new String("");
		boolean check=false;
		for(int i=s.length()-1;i>=0;i--){
			if(s.charAt(i)=='1')
				check=true;
			if(check==true)
				if(s.charAt(i)=='1')
					temp = temp.concat("1");
				else
					temp = temp.concat("0");
		}
		
		return temp;
	}
	public static void main(String[] args){
	//	Scanner sc = new Scanner(System.in);
	//	String a = sc.nextLine();
		System.out.println(calc2(12));
	}
}
