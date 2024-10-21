class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int count_zero = 0;
        for (int num : arr) {
            if (num == 0) {
                count_zero++;
                if (count_zero >= 2) {
                    return true;
                }
            }
        }
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if( i !=j && arr[i]==arr[j]*2){
                    return true;
                }
            }
        }
        return false;
    }
};