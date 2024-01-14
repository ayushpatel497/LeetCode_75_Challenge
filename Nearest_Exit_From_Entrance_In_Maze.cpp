class Solution {
private:
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size();
        int m=maze[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        visited[entrance[0]][entrance[1]]=1;
        int ct=0;
        while(!q.empty()){
            int size=q.size();
            ct++;
            while(size--){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny] && maze[nx][ny]=='.'){
                        if(nx==0 || nx==n-1 || ny==0 || ny==m-1)
                            return ct;
                        q.push({nx,ny});
                        visited[nx][ny]=1;
                    }
                }
            }
        }
        return -1;
    }
};