class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // int ans=0;
        // int count=0;
        // sort(nums.begin(),nums.end());
        // if(nums.size()<3)return ans=*max_element(nums.begin(),nums.end());
        // while(count!=3){               
        //     for(int i=nums.size()-1;i=0;i--){
        //         ans=nums[i];
        //         count+=1;
        //         if(ans==nums[i+1]){count-=1;}
        //     }}return ans;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int>ans(st.begin(),st.end());
        if(ans.size()<3){return ans[ans.size()-1];}
        return ans[ans.size()-3];
    }
};