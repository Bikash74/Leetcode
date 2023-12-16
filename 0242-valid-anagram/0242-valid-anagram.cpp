class Solution {
    private:
    bool check(int a[26],int b[26])
    {
        for(int i=0;i<26;++i)
        {
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        int count1[26]={0};
        int count2[26]={0};
        for(int i=0;i<s.length();++i)
        {
            count1[s[i]-'a']++;
            count2[t[i]-'a']++;
        }
        if(check(count1,count2)) return 1;
        return 0;
    }
};