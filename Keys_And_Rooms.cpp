class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> seen(rooms.size(), false);
        seen[0] = true;
        stack<int> st;
        st.push(0);
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            for (int neighbours : rooms[node]) {
                if (!seen[neighbours]) {
                    seen[neighbours] = true;
                    st.push(neighbours);
                }
            }
        }
        for (bool s : seen)
            if (!s)
                return false;
        return true;
    }
};