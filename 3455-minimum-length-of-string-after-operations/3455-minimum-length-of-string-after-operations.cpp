class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>hash;
        for(char c:s){
            hash[c]++;
        }
        int ans=0;
        for(auto it=hash.begin();it!=hash.end();it++){
            if(it->second>2){
                if(it->second%2==0){
                    ans+=2;
                }
                else{ans+=1;}
            }
            else{ans+=it->second;}
        }
        return ans;
    }
};