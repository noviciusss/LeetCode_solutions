class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>as;
        vector<int> ans;
        for(int num:nums){
            as[num]++;
        }
        for(auto i:as){
            if(i.second==2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};