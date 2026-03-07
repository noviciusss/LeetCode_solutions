class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)return false;
        // priority_queue<int,vector<int>,greater<int>>minh(hand.begin(),hand.end());
        // while(!minh.empty()){
        //     vector<int>chk;
        //     while(chk.size()<=groupSize){
        //         chk.push_back(minh.top());
        //         int chk = minh.top();
        //         minh.pop();
        //         if(chk+1!=minh.top()){return false;}
        //     }
            
        // }return true;
        sort(hand.begin(),hand.end());
        unordered_map<int,int>mp;
        for(int c:hand){
            mp[c]++;
        }
        for(int card:hand){
            if(mp[card]>0){
                for(int j=0;j<groupSize;j++){
                    if(mp[card+j]<=0){return false;}
                    mp[card+j]--;
                }
            }
        }return true;
    }
};