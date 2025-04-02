class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        //[1,2,3,4,5,6]
        long long maxValue=INT_MIN;
        for(long long i=0;i<nums.size()-2;i++){
            for(long long  j=i+1;j<nums.size()-1;j++){
                for(long long  k=j+1;k<nums.size();k++){
                    long long temp=(1LL * (nums[i] - nums[j]) * nums[k]); 
                    if(temp>maxValue){
                        maxValue=temp;
                    }

                }

            }
        }
        if(maxValue<0){
            return 0;
        }
        return maxValue;
        
    }
};