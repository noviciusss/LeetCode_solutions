class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n= nums.size()/2;
        // unordered_map<int,int>chk;
        // for(int i=0;i<nums.size();i++){
        //     chk[nums[i]]++;
        //     if(chk[nums[i]]>n)return nums[i];
        // }
        // return -1;
        int cnd =0,cnt=0;
        for(int num:nums){
            if(cnt==0){cnd=num;cnt++;}
            else if(cnd == num){
                cnt++;
            }
            else{cnt--;}
        }
        return cnd;
    }
};