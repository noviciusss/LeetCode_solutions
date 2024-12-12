class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // if(nums.size()==1)return nums[0];
        // int maxi=0;
        // for(int i=0;i<nums.size();i++){
        //     int prod=1;
        //     for(int j=i;j<nums.size();j++){
        //         prod=prod*nums[j];
        //         maxi=max(maxi,prod);
        //     }
        // }
        // return maxi;
        //OPtimal solution 
        if(nums.size()==1)return nums[0];
        int pre =1,suff=1;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(pre==0) pre=1;
            if(suff==0)suff=1;
            pre=pre*nums[i];
            suff=suff*nums[nums.size()-i-1];
            maxi=max(maxi,max(pre,suff));
        } 
        return maxi;
    }
};