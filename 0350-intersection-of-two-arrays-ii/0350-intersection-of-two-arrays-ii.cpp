class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>n1;
      vector<int>ans;
      for(auto it:nums1){
        n1[it]++;
      }
      for(int num:nums2){
        if(n1[num]>0){
            ans.push_back(num);
            n1[num]--;
        }

      }
      return ans;
    }
};