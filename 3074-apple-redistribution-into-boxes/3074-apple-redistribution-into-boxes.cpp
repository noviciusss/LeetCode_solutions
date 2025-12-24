class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int n = capacity.size();
        int sum =0;
        int ans=0;
        for(int i =0;i<apple.size();i++){
            sum+=apple[i];
        }
        for(int i=n-1;i>=0;i--){
            if(sum>0){sum-=capacity[i];ans++;}
            else{break;}
        }
        return ans;
    }
};