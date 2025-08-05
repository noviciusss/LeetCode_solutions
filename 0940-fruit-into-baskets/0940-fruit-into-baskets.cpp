class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;int maxl=0;
        unordered_map<int,int>chk;
        for(int right=0;right<fruits.size();right++){
            chk[fruits[right]]++;
            while (chk.size()>2){
                int left=fruits[l];
                chk[left]--;
                if(chk[left]==0){
                    chk.erase(left);
                }
                l++;
            }
            maxl=max(maxl,right-l+1);
        }
        return maxl;



    }
};