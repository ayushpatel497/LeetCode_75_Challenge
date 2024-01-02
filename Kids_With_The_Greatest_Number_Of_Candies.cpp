class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxC=*max_element(begin(candies),end(candies));
        for (int candy : candies) {
            ans.push_back(candy + extraCandies >= maxC);
        }
        return ans;
    }
};