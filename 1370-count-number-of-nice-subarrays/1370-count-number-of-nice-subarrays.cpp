class Solution {
public:
    int ans(vector<int>& nums, int k) {
        int left =0;
        int maxl=0;
        int total_sub=0;
        int cnt=0;
        for(int right=0;right<nums.size();right++){
           if(nums[right]%2!=0){
            cnt++;
           }
           while(cnt>k){
             if(nums[left]%2!=0){
             cnt--;}
             left++; }
           total_sub+=right-left+1;
        }return total_sub;}
    int numberOfSubarrays(vector<int>&nums,int k){
        return ans(nums,k)-ans(nums,k-1);
    }    
    
};