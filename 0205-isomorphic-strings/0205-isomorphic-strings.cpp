class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,char>ts,st;
        for(int i=0;i<s.size();i++){
            char a = s[i];
            char b= t[i];
            if(ts.count(a) && ts[a]!=b)return false;
            if(st.count(b) && st[b]!=a)return false;

            ts[a]=b;
            st[b]=a;
        }
        return true;
    }
};