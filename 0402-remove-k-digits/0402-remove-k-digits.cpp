class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(char c:num){
            while(!st.empty()&& k>0 && st.top()-'0'>c-'0'){
                st.pop();
                k-=1;
            }
            st.push(c);
        }
        while(k>0 && !st.empty()){ st.pop();k--;}
        if (st.empty()){return "0";}
        string ans ;
        while(!st.empty()){
            ans +=st.top();
            st.pop();
        }
        //handling front 0
        while(ans.size()!=0 && ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        if(ans.empty()) ans ='0';
        return ans;
    }
};