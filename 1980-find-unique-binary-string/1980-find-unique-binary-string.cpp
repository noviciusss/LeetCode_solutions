class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_set<string>st(nums.begin(),nums.end());
        string curr = nums[0];
        for(int i=0;i<curr.size();i++){
            curr[i]^=1;
            if(!st.count(curr))return curr;
            curr[i]^=1;
        }
        return curr;
    }
};