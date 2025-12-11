class Solution {
public:
    int jump(vector<int>& nums) {
        int jump =0,far =0,end=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i>far)return 0 ;
            far = max(far,i+nums[i]);
            if(i==end){
                jump++;
                end=far;
            }
        }
        return jump;
    }
};
