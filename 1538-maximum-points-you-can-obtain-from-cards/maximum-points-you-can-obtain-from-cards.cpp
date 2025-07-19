class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
        int total = 0;

        // Take first k elements from the front
        for (int i = 0; i < k; ++i) {
            total += arr[i];
        }

        int maxSum = total;

        // Slide window: remove i elements from front and take i from back
        for (int i = 1; i <= k; ++i) {
            total -= arr[k - i];       // Remove from front
            total += arr[n - i];       // Add from back
            maxSum = max(maxSum, total);
        }

        return maxSum;
    }
};
