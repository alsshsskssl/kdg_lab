//This programe is incomplete...

package josephus;

import java.util.Scanner;
import java.util.Queue;
import java.util.ArrayList;

class main{
	public static void main(String[] args){
		int N,M;
		ArrayList<Integer> AL = new ArrayList<Integer>();
		Queue<Integer> Q = new Queue<>();
		Scanner SC = new Scanner(System.in);
		N = SC.nextInt();
		M = SC.nextInt();
	
		for(int i=0;i<N;i++)
			Q.push(i+1);

		while(Q.isEmpty()==0){
			for(int i=0;i<M;i++){
				if(i+1==M){
					AL.add(Q.Peek());
					Q.remove();
				}
				else{
					Q.insert(Q.Peek());
					Q.remove();
				}
			}
		}
		//print state
		System.out.print("<");
		for(int i=0;i<AL.size();i++){
			if(i!=0)
				System.out.print(", ");
			System.out.print(AL.get(i));
		}
		System.out.print(">");
				
	}
}
