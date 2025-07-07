class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        map<int,int> m;
        for(int i:arr){
            m[i]++;
        }
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]>1){
                return i+1;
            }
        }
        return -1;
    }
};