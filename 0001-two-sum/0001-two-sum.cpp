class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int n =  nums[i];
            int more = target-n;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[n]=i;
        }
        return {-1,-1};

    }
};