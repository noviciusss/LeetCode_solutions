class Solution {
public:
    long long totalhrss(vector<int>& arr,int num){
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=ceil((double)arr[i]/num);
        }return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long high=*max_element(piles.begin(),piles.end());     
        long long low = 1,ans=0;
        
        while(low<=high){
            long long mid=(low+high)/2;
            long long totalhrs= totalhrss(piles,mid);
            if(totalhrs<=h){
                ans=mid;
                high=mid-1;
            }
            else{low=mid+1;}
        }return ans;
    }
};