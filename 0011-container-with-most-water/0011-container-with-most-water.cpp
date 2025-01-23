class Solution {
public:
    int maxArea(vector<int>& height) {
        // int area = 0;
        // int n = height.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         int currentArea = (j - i) * min(height[i], height[j]);
        //         area = max(area, currentArea);
        //     }
        // }
        // return area;
        int low=0;
        int high = height.size()-1;
        int area =0;
        while(low<high){
            area = max(area,(high-low)*min(height[low],height[high]));
            if(height[low]<height[high]){
                low++;
            }else {high--;}
        }return area;
    }
};