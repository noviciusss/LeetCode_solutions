class Solution {
public:
    bool noZero(int num) {
        string s = to_string(num);
        return s.find('0') == string::npos;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; ++a) {
            int b = n - a;
            if (noZero(a) && noZero(b)) {
                return {a, b};
            }
        }
        return {};
    }
};