class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1;j<arr.size()-1;j++){
                for(int k=j+1;k<arr.size();k++){
                    if(arr[i]+arr[j]+arr[k]==target){
                        return 1;
                    }
                }
            }
            
        }
        return 0;
    }
};