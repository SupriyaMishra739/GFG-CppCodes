class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
       unordered_set<int> unSet;
       int max=INT_MIN;
        for(int i:arr){
            if(i>max)
                {
                max=i;
                }
            
            if(i>0){
                
                 unSet.insert(i);
                
            }
        }
        if(max<=0 ){
            return 1;
        }
        
        for(int i=1;i<=max;i++)
        {
            if(unSet.count(i)==0)
            {
                return i;
            }
        }
        
       return max+1; //if all are positive and present there
        
        
    }
};