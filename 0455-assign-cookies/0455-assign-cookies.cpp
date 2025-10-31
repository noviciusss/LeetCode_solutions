class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int n = g.size();int m = s.size();
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());
     int l =0;int r =0;
     int ans=0;
     while(l<n && r<m){
        if(s[r]>=g[l]){
            l++;
        }
        r++;
     }
     return l;
    }
};