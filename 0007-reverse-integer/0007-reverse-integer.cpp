class Solution {
public:
    int reverse(int x) {
        long n=0;
        while(x!=0){
            n=n*10+x%10;
            x/=10;
        }
        if(n==int(n)){
            return n;
        }else{ return 0;}
    }
};