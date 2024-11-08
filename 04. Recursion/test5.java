public class Test5 {
    static int fun(int n){
        if(n<3)
            return 0;
        else{
            return 1+fun(n/2);
        }
    }
    public static void main(String[] args) {
       int value =  fun(9);
        System.out.println(value);
    }
}
