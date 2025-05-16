class Solution {
public:
    int titleToNumber(string columnTitle) {
        int con=0;
        int cnum=0;
        for(int i =0;i<columnTitle.length();i++){
            con=columnTitle[i]-'A'+1;
            cnum+=con *pow(26,columnTitle.length()-1-i);
        }
        return cnum;
    }
};