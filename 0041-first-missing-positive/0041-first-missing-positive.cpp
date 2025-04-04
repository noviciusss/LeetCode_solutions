class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int maxi = *max_element(nums.begin(),nums.end());
        //     int chk=1;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==0 ||nums[j]<0){chk++;}
        //         if(chk==nums[j]){chk++;}
        //         else{return chk;}
        //     }
        //     return chk;
         int n = nums.size();
        for (int i = 0; i < n; i++) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
};
