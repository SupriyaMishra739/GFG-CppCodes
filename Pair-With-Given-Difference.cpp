//Pair With Given Difference
//Problem Description

// Given an one-dimensional unsorted array A containing N integers.

// You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

// Return 1 if any such pair exists else return 0.


int Solution::solve(vector<int> &A, int B) {
    if (A.size() < 2) return 0;  // Prevents out-of-bounds errors

    sort(A.begin(), A.end());  // Sort the array

    int start = 0;
    int end = 1;
    int size = A.size();
    if(B<0){
        B=B*-1;
    }

    while (end < size) {
        int currentDiff = A[end] - A[start];

        if (currentDiff == B) {
            return 1;  // Pair found
        } 
        else if (currentDiff < B) {
            end++;  // Move `end` to find a bigger difference
        } 
        else {
            start++;  // Move `start` to reduce the difference
        }

        // Ensure `start` never catches up to `end`
        if (start == end) {
            end++;
        }
        
    }
    return 0;  // No valid pair found
}
