class Solution {
public:
    int numberOfSubstrings(string s) {
        // int count=0;
        // for(int i=0;i<s.length();i++){
        //     vector<int>chk(3,false);
        //     for(int j=i;j<s.length();j++){
        //         chk[s[j]-'a']=true;
        //         if(chk[0] && chk[1]&&chk[2]){
        //             count+=(s.length()-j);
        //             break;
        //         }
        //     }
        // }return count;

        int count=0;
        vector<int>chk(3,-1);
        for(int i=0;i<s.length();i++){
            chk[s[i]-'a']=i;
            if(chk[0]!=-1 && chk[1]!=-1 && chk[2]!=-1){
                int min_index = min({chk[0],chk[1],chk[2]});
            
            count+=(min_index+1);}
        }
        return count;
    }
};