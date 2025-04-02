class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=0;
        int rightmax=0;
        int water=0;

      int  maxHeight=height[0];
        int index=0;
        //finding the max height

        for(int i=1;i<n;i++){
            if(height[i]>maxHeight){
                maxHeight=height[i];
                index=i;
            }
        }

        //solving left  part
        for(int i=0;i<index;i++){
           
           if(leftmax> height[i]) {//this means our height has the left support
                water+=leftmax-height[i];
           }
           else{
            leftmax=height[i];
           }

            
        }




        //solving right part
         for(int i=n-1;i>index;i--){
           
           if(rightmax> height[i]) {//this means our height has the right support
                water+=rightmax-height[i];
           }
           else{
            rightmax=height[i];
           }

            
        }

        return water;
        
    }
};