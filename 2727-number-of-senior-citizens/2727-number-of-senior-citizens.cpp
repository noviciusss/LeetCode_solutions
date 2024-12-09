class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto detail:details){
         int age=(detail[11]-'0')*10+(detail[12]-'0'); //so if we use -'0' it convert s to numeric vakue
        if(age>60){ans+=1;}}
        return ans;
    }
};