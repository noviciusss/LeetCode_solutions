class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> maps;
        int num =0;
        int n= nums.size();
        for(int i=0;i<nums.size();i++){
            maps[nums[i]]++;
        }
        n = n/2;
        for(auto it:maps){
            if(it.second>n){
               return it.first;
                
            }
        }
        return 0;
    }
};