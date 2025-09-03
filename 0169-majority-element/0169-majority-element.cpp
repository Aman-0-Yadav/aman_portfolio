class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int i;
        int ans;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};