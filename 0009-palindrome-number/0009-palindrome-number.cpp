class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
        int deep =x;
        long num;
        while(x!=0){
            num = num*10+x%10;
            x/=10;
        }
        if(num==int(deep)){return true;}
        else{return false;}}
        else{return false;}
    }
};