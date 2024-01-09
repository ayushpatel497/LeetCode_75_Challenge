class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> Radiant, Dire;
        int n = senate.length();
        for (int i = 0; i < n; i++){
            if (senate[i] == 'R')
                Radiant.push(i);
            else
                Dire.push(i);
        }
        while (!Radiant.empty() && !Dire.empty()){
            if (Radiant.front() < Dire.front())
                Radiant.push(n++);
            else 
                Dire.push(n++);
            Radiant.pop(), Dire.pop();
        }
        return (Radiant.empty()) ? ("Dire") : ("Radiant");
    }
};