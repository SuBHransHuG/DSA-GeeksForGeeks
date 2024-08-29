public class maxSumOfKConsecutiveNumbers {
    public static void main(String[] args) {
        int[] arr = {1, 8, 30, -5, 20, 7};
        int n = arr.length;
        int k = 3;
        int curr_sum = 0;
        for (int i = 0; i < k; i++){
            curr_sum += arr[i];
        }
        int max_sum = curr_sum;
        for (int i = k; i < n; i++) {
            curr_sum += arr[k] - arr[i - k];
            max_sum = Math.max(curr_sum, max_sum);
        }
        System.out.println(max_sum);
    }
}
