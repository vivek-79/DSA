class Solution {
public:
    pair<int, int> find(vector<int>& weights) {
        long long sum = 0;
        int maxi = INT_MIN;

        for (int i = 0; i < weights.size(); i++) {

            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }

        return {sum, maxi};
    }

    int calc(vector<int>& weights, int val) {

        int high = weights.size();
        int low = 0;
        int sum = 0;
        int days = 0;
        while (low < high) {

            if (sum + weights[low] <= val) {
                sum += weights[low];
                low++;
            } else {
                days++;
                sum = 0;
            }
        }
        if(sum>0) days++;
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        auto [high, low] = find(weights);

        int ans = -1;
        while (low <= high) {

            int mid = (low + high) / 2;

            int val = calc(weights, mid);

            if (val <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};