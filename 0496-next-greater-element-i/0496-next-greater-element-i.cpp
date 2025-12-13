#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nxt;   
        stack<int> st;                

        for (int x : nums2) {
            while (!st.empty() && x > st.top()) {
                nxt[st.top()] = x;
                st.pop();
            }
            st.push(x);  }
        while (!st.empty()) {         
            nxt[st.top()] = -1;
            st.pop();
        }
        vector<int> ans;
        ans.reserve(nums1.size());
        for (int x : nums1) ans.push_back(nxt[x]);
        return ans;
    }
};
