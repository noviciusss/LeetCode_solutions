class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end(), greater<int>());
        long long ans=happiness[0];
        for(int i =1;i<k;i++){
            long long sum = (long long)happiness[i]-i;
            if(sum>0)ans+=sum;
        }
        return ans;
        // for(int i=n-1;i>=0;i--){
        //     if(k!=0){
        //         sum+=happiness[i];
        //         k--;
        //     }
        //     else{break;}
        // }
        // if(k==1)return sum;
        // int ans = sum-k-1;return ans;
    }
};