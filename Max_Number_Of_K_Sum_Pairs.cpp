class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int i=0,j=nums.size()-1,ct=0;
        while(i<j){
            if(nums[i]+nums[j]==k){
                i++,j--,ct++;
            }
            else if(nums[i]+nums[j]>k)
                j--;
            else
                i++;    
        }
        return ct;
    }
};