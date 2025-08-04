class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size()/2;
        unordered_map<int,int>chk;
        for(int i=0;i<nums.size();i++){
            chk[nums[i]]++;
            if(chk[nums[i]]>n)return nums[i];
        }
        return -1;

    }
};