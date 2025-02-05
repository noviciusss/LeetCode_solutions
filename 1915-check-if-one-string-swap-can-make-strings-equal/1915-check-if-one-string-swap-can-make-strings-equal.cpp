class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        unordered_map<int,int>str1;
        unordered_map<int,int>str2;
        for(char c1:s1){
            str1[c1]++;
        }
        for(char c2:s2){
            str2[c2]++;
        }
        if(str1!=str2)return false;
        int diff=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){diff++;}
        }
        return diff==2;
    }
};