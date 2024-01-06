class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        int sum=0,maxi=INT_MIN;
        int i=0,j=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                maxi=max(maxi,sum);
                sum-=nums[i++];
                j++;
            }
        }
        return maxi/(double)k;
    }
};