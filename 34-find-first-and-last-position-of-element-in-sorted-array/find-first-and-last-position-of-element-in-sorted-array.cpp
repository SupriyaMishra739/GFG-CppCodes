class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        int mid;
        int start=0;
        int end=nums.size()-1;
        int firstOcc=-1;
        int lastOcc=-1;

        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                firstOcc=mid;
                end=mid-1;


            }
            else if(nums[mid]<target){
                start=mid+1;

            }
            else{
                end=mid-1;

            }


        }
        ans[0]=firstOcc;


        //lastOcc

        start=0;
         end=nums.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                lastOcc=mid;
                start=mid+1;


            }
            else if(nums[mid]<target){
                start=mid+1;

            }
            else{
                end=mid-1;

            }


        }
        ans[1]=lastOcc;

        return ans;
        
    }
};