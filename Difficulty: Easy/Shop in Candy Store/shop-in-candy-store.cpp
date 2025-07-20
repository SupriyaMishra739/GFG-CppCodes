class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(),arr.end()); //ascending order
        int i=0;
        int j=arr.size()-1;
        int min_money=0;
        int max_money=0;
        //min money
        
        while(i<=j){
            min_money=  min_money+arr[i];
            j=j-k;
            i++;
        
        }
        
           //max money
           i=arr.size()-1;
           j=0;
        
        while(j<=i){
            max_money=  max_money +arr[i];
            j=j+k;
            i--;
        
        }
        vector<int> ans;
        ans.push_back(min_money);
          ans.push_back(max_money);
          
          return ans;
        
        
        
        
    }
};