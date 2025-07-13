

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {

        map<int,int> m; //value->index
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            int compliment= target-nums[i];
            if(m.count(compliment)){
                return {m[compliment],i};

            }
            m[nums[i]] = i;
        }
        return {};
    
    
    }
};
