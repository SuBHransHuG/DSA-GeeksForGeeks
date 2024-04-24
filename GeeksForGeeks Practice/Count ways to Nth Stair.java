class Solution {
        // Function to count number of ways to reach the nth stair
        // when order does not matter.
       
        
        long countWays(int n) {
           
              long[] dp = new long[n + 1];
        long mod = 1000000007;
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = (dp[i - 2] + 1) % mod;
        }
        return dp[n];
    }
    }
