class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int l=0,r = nums.size();

        while(l<r){
            int mid =  (l+(r-l)/2);

            if(mid%2!=0){mid--;}
            if(nums[mid] ==nums[mid+1]){l = mid+2;}
            else{r = mid;}

        }return nums[l];
    }
};