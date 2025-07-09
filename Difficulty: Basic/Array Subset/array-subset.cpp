class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int> m;
        for(auto it:a){
            m[it]++;
        
        }
        
        for(int i=0;i<b.size();i++){
            if(m[b[i]]){ //present
            m[b[i]]--;
            
               
                
            }
            else{//not present
            return false;
                
            }
           
        }
        
        return true;
        
    }
};