class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        while(ans%10!=ans){
            int a=ans%10;
            int b=ans/10;
            ans=a+b;
        }
        return ans;
    }
};