class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int i;
        int sum=0;
        vector<int> res;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
            res.push_back(sum);
        }
        return res;
    }
};