class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ans;
    for (int i = 0; i < numbers.size(); i++) {
        int low = i + 1;
        int high = numbers.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (numbers[i] + numbers[mid] == target) {
                ans.push_back(i + 1);
                ans.push_back(mid + 1);
                return ans;}
             else if (numbers[i] + numbers[mid] > target) 
              {high = mid - 1;}
              else{low = mid + 1;}
        }
    }
    return ans;
}
};