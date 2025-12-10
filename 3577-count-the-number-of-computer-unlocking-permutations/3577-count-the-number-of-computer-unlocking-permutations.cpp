class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        const int MOD = 1000000007;
        for(int i=1;i<complexity.size();i++){
            if(complexity[i]<=complexity[0]){return 0;}
        }
        long long res = 1;
        for(int i=1;i<complexity.size();i++){
            res = (res *i)%MOD;
        }
        return res;
    }
};