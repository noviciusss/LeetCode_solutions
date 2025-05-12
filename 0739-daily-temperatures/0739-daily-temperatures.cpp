class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n);
    
        for (int i = n - 1; i >= 0; i--) {
            int j = i + 1;
            while (j < n && temperatures[j] <= temperatures[i]) {   
                if (answer[j] > 0) {
                    j += answer[j];
                } else {
                    j = n;
                }
            }
            if (j < n) {
                answer[i] = j - i;
            } 
        }
        return answer;
    }
};