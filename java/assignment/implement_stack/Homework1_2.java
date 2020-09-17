import java.util.Vector;

public class Homework1_2{
    public static void main(String[] args){
        System.out.println("Test my_stack");
        My_stack1 st = new My_stack1();
        
        st.push(10);
        st.push(20);
        System.out.println(st.pop());   //pop 20
        System.out.println(st.size_0());    //size : 1
        System.out.println(st.isEmpty());   //false
        System.out.println(st.pop());   //pop 10
        System.out.println(st.isEmpty());   //true
    }
}
class My_stack2{
    private Vector<Integer> v = new Vector<Integer>();  //this 포인터
    
    public void push(int num){
        v.add(num); //this는 생략해도 무방합니다.
    }

    public int pop(){
        return v.remove(v.size()-1);
    }

    public boolean isEmpty(){   //homework1_1과 다르게 상속을 받은 것이 아니므로 isEmpty라는 이름을 사용할 수 있습니다.
        return v.isEmpty();
    }

    public int size(){  //homework1_1과 다르게 상속을 받은 것이 아니므로 isEmpty라는 이름을 사용할 수 있습니다.
        return v.size();
    }
}
