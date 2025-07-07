class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        int index1=-1;
        int index2=-1;
        
     for(int i=0;arr.size();i++){
         if(num1==arr[i]){
             index1=i;
             break;
             
         }
     }
      for(int i=arr.size()-1;i>=0;i--)
      {
         if(num2==arr[i]){
             index2=i;
             break;
             
         }
     }
     int count=0;
     for(int i=index1+1;i<index2;i++){
         count++;
     }
     return count;
     
     
    }
};