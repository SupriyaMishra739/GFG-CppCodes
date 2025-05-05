class Solution 
{
public:
    int subarraysDivByK(vector<int>& arr, int k) 
    {


         unordered_map<int,int> m;
         m[0]=1;

        int rem;
        int prefixSum=0,total=0;
        
        for(int i=0;i<arr.size();i++){
            prefixSum=prefixSum+arr[i];
            if(k==0){
                return 0;
            }
            rem=prefixSum%k;

            if(rem<0){ //if rem is -ve-> make it +ve
            rem=rem+k;
            }

            if(m.count(rem)){
                total=total+m[rem];
                
                m[rem]++;

            }
            else{
                m[rem]=1;
            }
        }
        return total;
        
    
        
    }
};

