class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int k=0;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(i<(n-1)&&nums[i]==nums[i+1]){
                continue;
            }
            else{
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};