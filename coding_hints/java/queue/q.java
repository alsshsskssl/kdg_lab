//import java.util.Queue;
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class q{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		Queue<Integer> q = new LinkedList<Integer>();
		//int temp = sc.nextInt();
		q.offer(123);	//push data
		print_q(q);
		if(q.isEmpty()==true){
			System.out.println("queue is empty!");
		}
	}
	static void print_q(Queue<Integer> q){
		for(int i=0;i<q.size();i++){
			System.out.println(q.poll());//poll is pop
		}
	}
}
