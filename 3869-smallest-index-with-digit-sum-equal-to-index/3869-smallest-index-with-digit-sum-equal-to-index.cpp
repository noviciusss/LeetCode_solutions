class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++ ){
                int chk=nums[i];
                int sum = 0;
                while(chk>0){
                    sum+=chk%10;
                    chk/=10;
                }
                if(sum==i)return i;
        }return -1;
    }
};