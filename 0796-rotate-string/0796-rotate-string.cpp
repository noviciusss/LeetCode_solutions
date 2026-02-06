class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
        string b = s+s;
        return b.find(goal)!=string::npos; //npos means not found -->!=npos means found it
    }
};