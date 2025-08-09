class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        vector<int> res;

        for(int i:nums){
            m[i]++;
        }

        for(auto it:m){
            if(it.second==1){
                res.push_back(it.first);

            }
        }
        return res;

        
    }
};