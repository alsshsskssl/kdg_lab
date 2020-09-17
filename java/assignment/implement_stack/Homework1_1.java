import java.util.Vector;

public class Homework1_1{
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
class My_stack1 extends Vector<Integer>{
    private Vector<Integer> v = this;   //this 포인터
    
    public void push(int num){
        this.add(num);  //this는 생략해도 무방합니다.
    }

    public int pop(){
        return this.remove(size()-1);
    }

    public boolean isEmpty_0(){     //isEmpty()메소드가 Vector내부에 존재하므로 이름을 isEmpty()로 지을 수 없습니다.
        return this.isEmpty();
    }

    public int size_0(){    //size()메소드가 Vector내부에 존재하므로 이름을 isEmpty()로 지을 수 없습니다.
        return this.size();
    }
}