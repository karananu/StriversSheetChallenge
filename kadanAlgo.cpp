class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int prev_sum=0;
        int curr_sum;
        for(int i=0;i<n;i++)
        {
            curr_sum=prev_sum+nums[i];
            ans=max(ans,curr_sum);
            prev_sum=max(curr_sum,0);
        }
        return ans;
    }
};