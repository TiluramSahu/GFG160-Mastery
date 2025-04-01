//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size(), i, j;
        
        // Step 1: Find the first decreasing element from the right
        for (i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                break;
            }
        }
        
        // Step 2: If such an element exists, find the next greater element
        if (i >= 0) {
            for (j = n - 1; j > i; j--) {
                if (arr[j] > arr[i]) {
                    break;
                }
            }
            swap(arr[i], arr[j]); // Swap them
        }
        
        // Step 3: Reverse the elements to the right of 'i'
        reverse(arr.begin() + i + 1, arr.end());
    }
};

//{ Driver Code Starts.
int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3},
        {3, 2, 1},
        {1, 1, 5},
        {1, 3, 2},
        {2, 3, 1, 3, 3}
    };
    
    Solution ob;
    for (auto& arr : testCases) {
        cout << "Before: ";
        for (int num : arr) cout << num << " ";
        cout << "\n";
        
        ob.nextPermutation(arr);
        
        cout << "After:  ";
        for (int num : arr) cout << num << " ";
        cout << "\n\n";
    }
    
    return 0;
}
// } Driver Code Ends