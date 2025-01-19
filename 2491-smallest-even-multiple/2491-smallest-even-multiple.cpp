class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans=n;
        if(n%2==0){return n;}
        return n*2;
    }
};