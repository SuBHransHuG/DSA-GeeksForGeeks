public class Test4 {
    static int func1(int n){
        if(n==1){
            return 0;
        }
        else{
            return 1 + func1(n/2);
        }
    }
    public static void main(String[] args) {
        int value = func1(16);
        System.out.println(value);
    }
}
