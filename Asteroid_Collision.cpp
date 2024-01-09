class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(auto &a: asteroids){
            bool flag = true;
            while(!ans.empty()&& ans.back()>0&&a<0){
                if(ans.back()+a<0) ans.pop_back();
                else if(ans.back()+a>0) {
                    flag = false;
                    break;
                }
                else {
                    ans.pop_back(); 
                    flag = false; 
                    break;
                }
            }
            if(flag) ans.push_back(a);
        }
        return ans;
    }
};
