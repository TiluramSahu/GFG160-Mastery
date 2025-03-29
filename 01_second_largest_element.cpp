#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function returns the second largest element
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) {
            return -1; // No second largest if less than 2 elements
        }

        int first = INT_MIN;
        int second = INT_MIN;

        for (int num : arr) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second && num != first) {
                second = num;
            }
        }

        return (second == INT_MIN) ? -1 : second;
    }
};

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1}; // Predefined array
    Solution ob;
    int result = ob.getSecondLargest(arr);
    
    if (result == -1) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
