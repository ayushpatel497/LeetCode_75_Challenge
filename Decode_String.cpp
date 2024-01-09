class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') 
                st.push(s[i]);
            else{
                string temp = "";
                while(st.top() != '['){
                    temp = st.top() + temp ;
                    st.pop();
                }
                st.pop();
                string kDigits = "";
                while(!st.empty() && isdigit(st.top())){
                    kDigits = st.top() + kDigits;
                    st.pop();
                }
                int k = stoi(kDigits);
                while(k--)
                    for(int p = 0; p < temp.size() ; p++)
                        st.push(temp[p]);
            }
        }
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};