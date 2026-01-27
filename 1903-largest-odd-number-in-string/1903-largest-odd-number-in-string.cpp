class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        for(int i= num.size()-1;i>=0;i--){
            int chk = num[i]-'0';
            if((chk & 1)==1){
                return ans.append(num.substr(0,i+1));
            }
        }
        return "";
    }
};