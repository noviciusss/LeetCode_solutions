class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto detail:details){
         int age=(detail[11]-'0')*10+(detail[12]-'0');
        if(age>60){ans+=1;}}
        return ans;
    }
};