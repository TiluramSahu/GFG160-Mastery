#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Predefined array

    Solution ob;
    ob.reverseArray(arr);

    cout << "Reversed Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
