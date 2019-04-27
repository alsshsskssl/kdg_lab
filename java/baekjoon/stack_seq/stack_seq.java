package stack_seq;

import java.util.Scanner;
import java.util.Stack;
import java.util.ArrayList;

public class stack_seq{
	public static void main(String[] args){
	        ArrayList<Integer> mylist = new ArrayList<Integer>();
		Stack<Integer> stack = new Stack<Integer>();
		Stack<Integer> temp_stack = new Stack<Integer>();
	        Scanner sc = new Scanner(System.in);
	        int cnt = sc.nextInt();
	        int[] arr = new int[cnt];
		boolean correct=true;

	        for(int i=0;i<cnt;i++)	// fill array
	                arr[i] = sc.nextInt();
		for(int i=0;i<cnt;i++)
			temp_stack.push(cnt-i);
		for(int i=0;i<cnt;i++){
			for(;;){
				if(temp_stack.size()==cnt){	//first input
					stack.push(temp_stack.pop());
					mylist.add(1);
					//System.out.println("first_push!");
				}
				else{
					if(stack.isEmpty()==false){
						if(stack.peek()==arr[i]){	//stack==arr??
							mylist.add(0);
							stack.pop();
							//System.out.println("pop!");
							break;
						}
						else{
							if(temp_stack.isEmpty()==true){	//temp_stack is empty??
								mylist.add(2);
								break;
							}
							else{
								stack.push(temp_stack.pop());
								mylist.add(1);
								//System.out.println("push!");
							}
						}
					}
					else{
						stack.push(temp_stack.pop());
						mylist.add(1);
					}
				}
			}
			if(temp_stack.isEmpty()==true&&stack.isEmpty()==true)	//stacks is empty??
				break;
		}

		for(int i=0;i<mylist.size();i++){
			if(mylist.get(i)==2){
				System.out.println("NO");
				correct=false;
			}
		}
		if(correct==true){
			for(int i=0;i<mylist.size();i++){
				if(mylist.get(i)==0){
					System.out.println("-");
				}
				else{
					System.out.println("+");
				}
			}
		}
	}
}
