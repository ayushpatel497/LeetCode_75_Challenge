class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> pq1; 
        priority_queue<int,vector<int>,greater<int>> pq2; 
        long long ans=0;
        int l=0,r=costs.size()-1;
        int cnt=0;
        while(cnt<k){ 
            while(pq1.size()<candidates && l<=r)
                pq1.push(costs[l++]); 
            while(pq2.size()<candidates && r>=l)
                pq2.push(costs[r--]);
            int top1 = pq1.size()>0?pq1.top():INT_MAX; 
            int top2 = pq2.size()>0?pq2.top():INT_MAX;
            if(top1<=top2){ 
                ans+=top1;
                pq1.pop(); 
            }
            else{ 
                ans+=top2;
                pq2.pop();
            }
            cnt++;
        }
        return ans;
    }
};