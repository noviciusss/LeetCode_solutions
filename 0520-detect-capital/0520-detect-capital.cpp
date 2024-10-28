class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()<=1) return true;
        string cmpr= word;
        for(auto& x:word){
            x=toupper(x);
        }
        if(word==cmpr){
            return true;
        }
        for(auto& x:word){
            x=tolower(x);
        }
        if(word==cmpr){
            return true;
        }
        word[0]=toupper(word[0]);
        for(int i = 1; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
        if(word == cmpr) {
            return true;
        }
        return false;
    }
};