class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(auto it:nums){
             sum+=it;
        }
        int siz = nums.size();
        int sum1= siz*(siz+1)/2;
        return sum1-sum;

    }
};