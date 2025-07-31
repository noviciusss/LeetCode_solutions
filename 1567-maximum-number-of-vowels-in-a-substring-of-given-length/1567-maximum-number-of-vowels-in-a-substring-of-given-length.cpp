class Solution {
public:
    bool isvowel(char c ){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int l=0;
        int cnt=0;
        int ans=0;
        for(int right=0;right<k;right++){
            if(isvowel(s[right])){
                cnt++;
            }
        }
        ans=cnt;
        for(int right=k;right<s.length();right++){
              if(isvowel(s[l])){
                cnt--;
            }l++;
             if(isvowel(s[right])){
                cnt++;
                ans=max(ans,cnt);
            }
        }return ans;
    }
};