class Solution {
private:
    long long getHours(vector<int>&piles,int mid){
        long long total=0;
        for(auto i: piles){
            int hours=ceil(i/(double)mid);
            total+=hours;
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=*(max_element(piles.begin(),piles.end()));
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long hours=getHours(piles,mid);
            if(hours<=h){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};