public class subarrayWithGivenSumOrNot1 {

    static boolean sumCheck(int[] arr,int n,int k){
        int curr_sum = arr[0];
        int s = 0;
        for(int e =1;e<n;e++){
            while(curr_sum>k && s<e-1){
                curr_sum -= arr[s];
                s++;
            }
            if(curr_sum == k){
                return true;
            }
            if(e<n){
                curr_sum+=arr[e];
            }
        }
        return (curr_sum==k);
    }

    public static void main(String[] args) {
        int[] arr = {1,4,20,3,10,5};
        int n = arr.length;
        int k = 33;
        boolean check = sumCheck(arr,n,k);
        System.out.println(check);
    }
}
