class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int nm:nums){
        mp[nm]++;
       }
       for(auto chk:mp){
        if(chk.second==1){return chk.first;}
       }
       return 0;

    }
};