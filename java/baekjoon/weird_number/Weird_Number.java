package weird_number;

import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

class Divisor{
	public ArrayList<Integer> get_divisor(int num){
		ArrayList temp_list = new ArrayList<Integer>();
		for(int i=0;i<num/4-1;i++){
			if(num%(i+1)==0){
			temp_list.add(i+1);	//division num
			if((i+1)!=num/(i+1))
				temp_list.add(num/(i+1));	//quotient
			}
		}
		Collections.sort(temp_list);

		return temp_list;
	}
}

class Weird_number{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer> list_int= new ArrayList<Integer>();
		Divisor div = new Divisor();
		//int cnt = sc.nextInt();
		//int[] num = new int[cnt];
		/*
		for(int i=0;i<cnt;i++){
			num[i] = sc.nextInt();
		}
		*/
		System.out.println(div.get_divisor(36));
	}
}

