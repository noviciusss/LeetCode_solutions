class Solution {
public:
    bool isThree(int n) {
        int ans =1;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){ans++;}
        }
        // if(ans==3)return true;
        // return false;
        return ans==3;
    }
};