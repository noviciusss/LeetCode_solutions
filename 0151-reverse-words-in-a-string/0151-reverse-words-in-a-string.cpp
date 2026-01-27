class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i = s.size()-1;
        while(i>=0){
            while(i>=0 && s[i]==' ')i--;
            if(i<0)break;
            int j=i;
            while(i>=0 && s[i]!=' ')i--;
            if(!ans.empty()){ans.push_back(' ');}
            ans.append(s.substr(i+1,j-i)); // so ye ik inbuild function hai subtr(start,len) kidhar se suru kre aur kitna aage tak thats why ik piche jaye means " "pe pauch kar taki ki while process na intrepret ho i+1se start uska end --> word count is end-start+1 --> j-(i+1)+1 = j-i
        }
        return ans;
    }
};