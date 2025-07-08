class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int prefix = 0;
        int maxi = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            prefix += arr[i];
            maxi = max(maxi, prefix);
            if (prefix < 0) {
                prefix = 0; // reset the subarray
            }
        }

        return maxi;
    }
};

