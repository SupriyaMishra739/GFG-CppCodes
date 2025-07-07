class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> unMap;

        for(int i:nums){
            unMap[i]++;

        }
        int sum=0;

        for(auto it:unMap){
            if(it.second==1){
                sum=sum+it.first;
            }

        }
        return sum;
        
    }
};