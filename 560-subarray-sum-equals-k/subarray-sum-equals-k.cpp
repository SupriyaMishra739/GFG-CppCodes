class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int prefixSum=0;
        int total=0; // the total number of subarrays which gives the sum k

        unordered_map<int,int> m;
        m[0]=1; //initialize the map with (0,1)->edge case handle

        for(int i=0;i<arr.size();i++){
            prefixSum=prefixSum+arr[i];

            if(m.count(prefixSum-k)){
                total=total+m[prefixSum-k];
                m[prefixSum]++;

            }
            else{
                m[prefixSum]++;

            }
        }
        return total;
        
    }
};