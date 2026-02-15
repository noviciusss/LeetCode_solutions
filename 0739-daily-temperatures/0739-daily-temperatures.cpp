class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n = temperatures.size();
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop(); 
            }
            if(!st.empty()){
                ans[i]=st.top()-i; // so yaha par we are storing max temp in stack indecs means 5-3 =2days 
            }
            st.push(i);
        }
        return ans;
    }
};