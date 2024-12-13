class Solution {
public:
    int day(const std::vector<int>& wei, int cap) {
        int dey = 1, load = 0;
        for (int we : wei) {
            if (we + load > cap) {
                dey += 1;
                load = we;
            } else {
                load += we;
            }
        }
        return dey;
    }

    int shipWithinDays(std::vector<int>& weights, int days) {
        int low = *std::max_element(weights.begin(), weights.end());
        int max = std::accumulate(weights.begin(), weights.end(), 0);

        while (low < max) {
            int mid = low + (max - low) / 2;
            int num = day(weights, mid);
            if (num <= days) {
                max = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};