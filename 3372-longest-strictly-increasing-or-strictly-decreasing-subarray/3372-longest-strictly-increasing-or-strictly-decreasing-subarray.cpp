class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int dec=1,maxLen =1,inc=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
               maxLen+=1;
               dec=1;
            }
            else if( nums[i]<nums[i-1]){dec+=1;maxLen=1;}
            else{dec=1;maxLen=1;}
            inc= max(maxLen,max(dec,inc));
        }return inc;
    }
};