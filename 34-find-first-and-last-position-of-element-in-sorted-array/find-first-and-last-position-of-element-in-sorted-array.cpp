class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start=0;
        int end=nums.size()-1;
        int first=-1;
        int second=-1;

        while(start<=end){
            int mid= start+(end-start)/2;

            if(nums[mid]==target){
                first=mid;
                end=mid-1;


            }
            else if(nums[mid]<target){
                start=mid+1;

            }
            else{
                end=mid-1;

            }
        }
        //reset the start and end
         start=0;
         end=nums.size()-1;

         while(start<=end){
            int mid= start+(end-start)/2;

            if(nums[mid]==target){
                second=mid;
               start=mid+1;


            }
            else if(nums[mid]<target){
                start=mid+1;

            }
            else{
                end=mid-1;

            }
        }


        vector<int> res(2);
        res[0]= first;
        res[1]= second;
        return res;

        
    }
};