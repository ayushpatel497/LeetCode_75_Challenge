class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string ans="",help="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && help.length()>0) {
                if(ans.length()==0)
                    ans=help+ans;
                else
                    ans=help+" "+ans;    
                help="";
            }
            else if(s[i]==' ') continue;
            else {
                help=help+s[i];
            }
        }
        return ans;
    }
};