class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>res(n,0);
        if(k==0)return res;
        int sum = 0;
        int step=k>0 ?1:-1;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=1;j<=abs(k);++j){
                int idx= (i+step*j+n)%n;
                sum+=code[idx];
            }
            res[i]=sum;
        }return res;
    }
};