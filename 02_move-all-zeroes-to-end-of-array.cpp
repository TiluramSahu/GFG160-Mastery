#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int count = 0;
        int n = arr.size();

        // Traverse the array and move non-zero elements
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[count++] = arr[i];
            }
        }

        // Fill remaining array with zeroes
        while (count < n) {
            arr[count++] = 0;
        }
    }
};


int main() {
    vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    Solution ob;
    int n = arr.size();
    ob.pushZerosToEnd(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}