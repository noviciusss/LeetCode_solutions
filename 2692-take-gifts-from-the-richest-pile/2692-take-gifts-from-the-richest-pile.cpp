class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq(gifts.begin(),gifts.end());
        for(int i=0;i<k;i++){
            int max=pq.top();
            pq.pop();
            int gift=sqrt(max);
            pq.push(gift);
        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};