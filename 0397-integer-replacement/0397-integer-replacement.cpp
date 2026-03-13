class Solution {
public:
    int integerReplacement(int n) {
       long long n1=n; 
       int ans=0;
        while(n1!=1){
            if(n1%2==0){n1=n1/2;}
            else if(n1==3 || n1%4==1){
                n1--;
            } 
            else{n1++;}
            ans++;
        }
        return ans;
    }
};