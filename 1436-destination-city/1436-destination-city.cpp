class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s1,s2;
        for(auto x:paths){
            s1.insert(x[0]);
            s2.insert(x[0]);
            s2.insert(x[1]);
        }
        for(auto x:s2){
            if(s1.find(x)==s1.end()) return x;
        }
        return "";
    }
};