#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};

        int candidate1 = INT_MIN, candidate2 = INT_MIN, count1 = 0, count2 = 0;

        // Step 1: Find potential candidates
        for (int num : arr) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
            else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Step 2: Verify the candidates
        count1 = count2 = 0;
        for (int num : arr) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> result;
        if (count1 > n / 3) result.push_back(candidate1);
        if (count2 > n / 3) result.push_back(candidate2);
        
        // Step 3: Sort the result to match expected output order
        sort(result.begin(), result.end());

        return result;
    }
};

// Main function
int main() {
    vector<int> nums = {1, 6, 6, 6, 6, 6, 5, 5, 5, 5}; // Predefined test case

    Solution ob;
    vector<int> ans = ob.findMajority(nums);

    // Print output
    if (ans.empty()) {
        cout << "[]";
    } else {
        for (auto &i : ans)
            cout << i << " ";
    }
    cout << "\n";

    return 0;
}

