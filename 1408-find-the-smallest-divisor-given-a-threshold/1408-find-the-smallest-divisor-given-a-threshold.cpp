class Solution {
public:
    int sumofd(vector<int>& nums,int mids){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum +=ceil((double)nums[i]/(double)mids);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int low=1;int high=nums[nums.size()-1];
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumofd(nums,mid)<=threshold){ans=mid,high=mid-1;}
            else { low=mid+1;}
        }
        return ans;
    }
};