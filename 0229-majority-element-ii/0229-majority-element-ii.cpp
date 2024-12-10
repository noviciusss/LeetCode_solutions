class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==1)return nums;
        if(nums.size()==2){
            if(nums[0]!=nums[1])
            {return nums;}
            else {ans.push_back(nums[0]);}}
        int chk = nums.size()/3;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count =1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){count+=1;}
            else{count =1;}
            if(count>chk && find(ans.begin(), ans.end(), nums[i]) == ans.end() ){ans.push_back(nums[i]);}
        }return ans;

    }
};