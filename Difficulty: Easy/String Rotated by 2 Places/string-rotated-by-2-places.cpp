//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    void rotateClockwise(string &str){
        char c= str[str.size()-1];
        int index=str.size()-2;
        
        while(index>=0){
            str[index+1]=str[index];
            
            index--;
        }
        str[0]=c;
    }
    
     void rotateAnticlockwise(string &str){
        char c= str[0];
       int index=1;
        
        while(index<str.size()){
            str[index-1]=str[index];
            
            index++;
        }
        str[str.size()-1]=c;
    }
    
    
    
    
    
    bool isRotated(string& s1, string& s2) {
        // Your code here
        
        string clockwise=s1;
        string anticlockwise=s1;
        
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);
        if(clockwise==s2){
            return 1;
        }
        
         rotateAnticlockwise(anticlockwise);
           rotateAnticlockwise(anticlockwise);
            if(anticlockwise==s2){
            return 1;
        }
        return 0;
           
        
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends