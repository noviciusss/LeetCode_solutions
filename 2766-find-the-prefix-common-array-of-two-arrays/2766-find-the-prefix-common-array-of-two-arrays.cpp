class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        // vector<int>ans;
        // for(int i=0;i<A.size();i++){
        //     int sum=0;
        //     for(int j=0;j<=i;j++){
        //         for(int k=0;k<=i;k++){
        //             if(A[j]==B[k]){
        //                 sum++;
        //                 break;
        //             }
        //         }
        //     }
        //     ans.push_back(sum);
        // }
        // return ans;
        int n=A.size();
        vector<int>chk(n+1,0),ans(n);
        int cnt=0;
        for(int i=0;i<A.size();i++){
            chk[A[i]]++;
            if(chk[A[i]]==2){
                cnt++;
            }
            chk[B[i]]++;
            if(chk[B[i]]==2){
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};