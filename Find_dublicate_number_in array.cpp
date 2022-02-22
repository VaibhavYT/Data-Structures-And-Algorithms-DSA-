class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[nums[i]%n]=nums[nums[i]%n]+n;
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>=n*2){
                ans=i;
            }
        }
        return ans;
    }
};