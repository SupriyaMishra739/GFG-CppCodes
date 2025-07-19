class Solution {
  public:
    bool isPrime(int n) {
        // code here
        //prime num--> divisible by 1 and itself
        if(n==1){
            return false;
        }
        
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
