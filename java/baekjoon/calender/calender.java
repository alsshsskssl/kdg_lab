//Monday Tuesday Wednesday Thursday Friday Saturday Sunday
//1,3,5,7,8,10,12 => 31
//4,6,9,11 => 30
//2 => 28
//1M 1D is Monday~!
//if you input month and day, you will get day of week!!

package calender;

import java.util.Scanner;

class Calender{
	private int month;
	private int day;
	private int day_of_week;
	Calender(){
		month =1;
		day = 1;
		day_of_week = -1;
	}
	void day_check(){
		if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day==31){
			day=1;
			month++;
		}
		if((month==4||month==6||month==9||month==11)&&day==30){
                        day=1;
                        month++;
                }
		if(month==2&&day==28){
                        day=1;
                        month++;
                }
		if(day_of_week==7)
			day_of_week=0;
	}

	public void calender_set(){
		Scanner sc = new Scanner(System.in);
		month = sc.nextInt();
		day = sc.nextInt();
	}
	
	public void show_day(){
		int temp_month=month;
		int temp_day=day;
		month=1;
		day=0;
		boolean finish = false;
		for(;;){
			day++;
			day_of_week++;
			this.day_check();
			if((month==temp_month)&&(day==temp_day)){
				finish=true;
				switch(day_of_week){
				case 0:
					System.out.println("monday");
					break;
				case 1:
					System.out.println("Tuesday");
					break;
				case 2:
                                        System.out.println("Wednesday");
					break;
				case 3:
                                        System.out.println("Thursday");
					break;
				case 4:
                                        System.out.println("Friday");
					break;
				case 5:
                                        System.out.println("Saturday");
					break;
				case 6:
                                        System.out.println("Sunday");
					break;
				default:
					System.out.println("default");
					break;
				}
			}
			if(finish==true)
				break;
			//System.out.print(finish);
		}	
	}
	
	public void print_state(){
		System.out.println(month+"M "+day+"D");
	}

}

class main{
	public static void main(String[] args){
		Calender cal = new Calender();
		cal.calender_set();
		cal.print_state();
		cal.show_day();
	}
}
