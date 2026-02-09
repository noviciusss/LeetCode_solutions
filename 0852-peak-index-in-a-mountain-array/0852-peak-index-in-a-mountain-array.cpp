class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int right = arr.size();
        int left=0;
        int ans=0;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]<arr[mid+1]){left=mid+1;ans=mid+1;}
            else{
                ans=mid;
                right=mid-1;
            }
        }
        return ans;
    }
};