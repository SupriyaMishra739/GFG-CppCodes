class Solution {
  public:
    vector<int> minPartition(int N) {
        vector<int> currency = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        vector<int> res;

        for (int i = 0; i < currency.size(); i++) {
            int count = N / currency[i];
            while (count--) {
                res.push_back(currency[i]);
            }
            N = N % currency[i];
        }
        return res;
    }
};
