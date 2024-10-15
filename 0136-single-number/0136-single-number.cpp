class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(auto it:hash){
            if(it.second==1){
                return it.first;
            }
        }
        return 0;
    }
};