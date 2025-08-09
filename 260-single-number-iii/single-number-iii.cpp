class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        vector<int> res;

        for(int i:nums){
            m[i]++;
        }

        for(int i:nums){
            if(m[i]==1){
                res.push_back(i);

            }
        }
        return res;

        
    }
};