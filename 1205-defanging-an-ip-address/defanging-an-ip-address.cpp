class Solution {
public:
    string defangIPaddr(string address) {
        string dot="[.]";
        string res="";

        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                res+=dot;
            }
            else{
                res=res+address[i];

            }
        }
        return res;
        
    }
};