class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
     int count=0;
    //  int fir =0;
    //  for(int i =0;i<nums.size();i++){
    //     if(fir!=i){
    //         if(nums[fir]+nums[i]<target){
    //             count+=1;
    //         }
    //     }fir+=1;
    //  }   return count;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]<target){
                count+=1;
            }
        }
    }return count;
    }
};