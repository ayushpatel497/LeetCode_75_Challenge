class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0,ct=0,i=0,j=0;
        while(j<s.size()){
            if(j-i+1<k){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    ct++;
                }
                j++;
            }
            else if(j-i+1==k){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    ct++;
                }
                j++;
                ans=max(ct,ans);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    ct--;
                }
                i++;
            }
        }
        return ans;
    }
};