import java.util.Random;
import java.util.Queue;
import java.util.Scanner;
import java.util.LinkedList;

public class changgu {
	public static void main(String[] args) {
		int total_time = 0;
		int sonnim_cnt = 0;
		int changgu_time = 0;
		int avg_serv_time = 0;
		Scanner sc = new Scanner(System.in);
		Queue<Integer> q = new LinkedList<Integer>();
		int cnt = sc.nextInt();
		for(int i=0;i<cnt;i++) {	
			if(q.isEmpty()==false) {
				for(int j=0;j<q.size();j++) {
					int temp = q.poll();
					temp++;
					q.offer(temp);
				}
			}
			if(sonnim()==true)
				q.offer(0);
			
			if(q.isEmpty()==false&&changgu(changgu_time)){
					int time = service_time();
					total_time += q.poll();
					total_time += time;
					avg_serv_time += time;
					changgu_time = time+1;
					sonnim_cnt++;
			}
			
			changgu_time--;
		}
		System.out.print("Average customer arrival time interval : ");	
		System.out.println(((int)total_time+q.size())/sonnim_cnt);
		System.out.print("Average time in bank : ");
		System.out.println((float)total_time/sonnim_cnt);
		System.out.print("Current waiting customers : ");
		System.out.println((double)q.size());
		System.out.print("Average service time : ");
		System.out.println(((int)avg_serv_time/sonnim_cnt));
	       	System.out.print("Probability that a customer will wait at a bank : ");
		System.out.println((double)10*((double)q.size()/(double)total_time/sonnim_cnt)+"%");
	}
	public static boolean sonnim() {
		Random r = new Random();
		if(r.nextInt(8)==0)
			return true;
		else
			return false;
	}
	public static boolean changgu(int n) {
		if(n<1)
			return true;
		else
			return false;
	}
	public static int service_time() {
		Random r = new Random();
		int a = r.nextInt(100);
		if(a<10)
			return 1;
		else if(a<30)
			return 2;
		else if(a<65)
			return 3;
		else if(a<95)
			return 4;
		else
			return 5;
	}
}
