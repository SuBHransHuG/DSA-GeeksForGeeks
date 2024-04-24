class Solution
{
    public int min_operations(int []nums)
    {
        // Code here
        int n = nums.length;
        int t = 1;
        int d[] = new int[n];
        Arrays.fill(d,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]-nums[j]>=i-j){
                    d[i]=Math.max(d[i],d[j]+1);
                    t=Math.max(d[i],t);
                }
            }
        }
        return n-t;
    }
}