package test_stack;

import java.util.Stack;

class Test_stack{
	public static void main(String[] args){
		Stack mystack = new Stack<Integer>();
		mystack.push(1);
		mystack.push(2);
		mystack.push(3);
		System.out.println(mystack.pop());
		System.out.println(mystack.peek());
		System.out.println(mystack.pop());
		System.out.println(mystack.isEmpty());
		System.out.println(mystack.pop());
		System.out.println(mystack.isEmpty());
		//peek is get top of the stack	
	}
}
