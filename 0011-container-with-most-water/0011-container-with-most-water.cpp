class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lft=0;
        int rght = heights.size()-1;
        int ans=0;
        while(lft<=rght){
            int area = min(heights[lft],heights[rght])*(rght-lft);
            ans = max(ans,area); 
            if(heights[lft]<heights[rght]){lft++;}
            else{rght--;}}return ans;
    }
};
