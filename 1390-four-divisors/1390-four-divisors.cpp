class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size();i++){
            int temp = 1+nums[i];
            int cnt=2;
            for(int j=2;j*j<=nums[i];j++){
                if (nums[i]%j==0){
                    int oth = nums[i]/j;
                    temp+=j;
                    cnt++;
                    if(oth !=j){
                        cnt++;
                        temp+=oth;
                    } 
                    if(cnt>4)break;}
                
            }
           
            if(cnt==4){ans+=temp;}
        }
        return ans;
    }
};