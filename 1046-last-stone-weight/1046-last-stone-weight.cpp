class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       
        
        while(stones.size()>1){
            int n = stones.size();
            sort(stones.begin(),stones.end());
            if(stones[n-1] ==stones[n-2]){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                int pu=stones[n-1]-stones[n-2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(pu);}
        }
        if(stones.size()==1){return stones[0];}
        return 0;
    }
};