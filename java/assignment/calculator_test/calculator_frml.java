import java.util.Stack;
import java.util.ArrayList;

public class calculator_frml{
	public static void main(String[] args){
		String s = "(1+2.0)*3-4/2";
		System.out.println(calc_frml(s));
		double a = '*';
		System.out.println(a);
	}

	public static String calc_frml(String S){
		Stack<String> mystack = new Stack<String>();
		String result = new String();
		result = "";
		
		//ArrayList<String> result = new ArrayList<String>();
		
		for(int i=0;i<S.length();i++){		//check '('
			if(S.charAt(i)=='('){
				mystack.push("(");
				//System.out.println("push (");
			}
			else if(S.charAt(i)=='*'||S.charAt(i)=='/'){		//check '*','/'
				if(S.charAt(i)=='*'){
					mystack.push("*");
					//System.out.println("push *");
				}
				else{
					mystack.push("/");
					//System.out.println("push /");
				}
			}
			else if(S.charAt(i)=='+'||S.charAt(i)=='-'){		//check '+','-'
				if(S.charAt(i)=='+'){
					if(mystack.isEmpty()){
						mystack.push("+");
						//System.out.println("isEmpty! and push +");
					}
					else{
						if(mystack.peek()=="*"||mystack.peek()=="/"){
							while(!(mystack.isEmpty())&&(mystack.peek()=="*"||mystack.peek()=="/")){
									result.concat(mystack.pop());
							}
							mystack.push("+");
						}
						else
							mystack.push("+");
					}
				}
				else{
					if(mystack.isEmpty()){
						mystack.push("-");
						//System.out.println("isEmpty! and push -");
					}
					else{
						if(mystack.peek()=="*"||mystack.peek()=="/"){
							while(!(mystack.isEmpty())&&(mystack.peek()=="*"||mystack.peek()=="/")){
									result = result.concat(mystack.pop());
							}
							mystack.push("-");
						}
						else
							mystack.push("+");
					}
				}
			}
		
			else if(S.charAt(i)==')'){
				while(mystack.peek()!="(")
					result = result.concat(mystack.pop());
				mystack.pop();
				//System.out.println("pop (");
			}
			else{
				result = result.concat(Character.toString(S.charAt(i)));
				//System.out.println("push_num!");
			}
		}
		//System.out.println(mystack);
		while(!mystack.isEmpty()){
			result = result.concat(mystack.pop());
			//System.out.println("last pop!");
		}
		return result;
		
	}

}
