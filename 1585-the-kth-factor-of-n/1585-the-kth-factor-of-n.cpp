class Solution {
public:
    int kthFactor(int n, int k) {
     int chk=n/2;
     vector<int>lst;
     lst.push_back(n);
     for(int i=1;i<=n/2;i++){
        if(n%i==0){
            lst.push_back(i);
        }
     }   
     sort(lst.begin(),lst.end());
     if(lst.size()<k){return -1;}
     else{
        return lst[k-1];
     }
    }
};