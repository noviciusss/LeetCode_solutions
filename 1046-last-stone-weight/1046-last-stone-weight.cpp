class Solution {
public:
    int lastStoneWeight(vector<int>& stones) { 
        // while(stones.size()>1){
        //     int n = stones.size();
        //     sort(stones.begin(),stones.end());
        //     if(stones[n-1] ==stones[n-2]){
        //         stones.pop_back();
        //         stones.pop_back();
        //     }
        //     else{
        //         int pu=stones[n-1]-stones[n-2];
        //         stones.pop_back();
        //         stones.pop_back();
        //         stones.push_back(pu);}
        // }
        // if(stones.size()==1){return stones[0];}
        // return 0;
        priority_queue<int>pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int m1=pq.top();
            pq.pop();
            int m2=pq.top();
            pq.pop();
            int diff = m1-m2;
            if(diff>0){pq.push(diff);}
        }
       return pq.empty() ? 0 : pq.top();
    }
};