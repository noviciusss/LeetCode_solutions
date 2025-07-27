class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            avg=sum/k;
        }
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            avg = max(avg,sum/k);
        }
        return avg;
    }
};