class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         map<int,int> has;
        for(int i=0;i<nums.size();i++){
            has[nums[i]]++;
        }
        for(auto it:has){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};