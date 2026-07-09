/*

Input: nums = [3, 5, 4, 1, 1]
Output: [1, 2]
Explanation: 1 appears two times in the array and 2 is missing from nums


Input: nums = [1, 2, 3, 6, 7, 5, 7]
Output: [7, 4]
Explanation: 7 appears two times in the array and 4 is missing from nums.


Input: arr[] = [3, 1, 3]
Output: [3, 2]
Explanation: 3 is occurs twice and 2 is missing.


Input: arr[] = [4, 3, 6, 2, 1, 1]
Output: [1, 5] 
Explanation: 1 is occurs twice and 5 is missing.

*/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {

        int n = nums.size();                                  // Store the size of the array.

        // Sum of first n natural numbers.
        long long sum = (1LL * n * (n + 1)) / 2;

        // Sum of squares of first n natural numbers.
        long long squareSum = (1LL * n * (n + 1) * (2LL * n + 1)) / 6;

        // Subtract the actual array values from the expected sums.
        for (int i = 0; i < n; i++) {

            sum -= nums[i];                                   // Now sum = missing - repeating.

            squareSum -= 1LL * nums[i] * nums[i];             // Now squareSum = missing² - repeating².
        }

        // We know:
        // missing - repeating = sum
        // missing² - repeating² = squareSum
        // (missing² - repeating²) = (missing - repeating) * (missing + repeating)

        long long missing = (sum + squareSum / sum) / 2;      // Calculate the missing number.

        long long repeating = missing - sum;                  // Calculate the repeating number.

        return {(int)repeating, (int)missing};                // Return [repeating, missing].
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.findMissingRepeatingNumbers(nums);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}


// Time Complexity : O(N)
// Space Complexity : O(1)



/*-------------------------------------------------- Explanation ----------------------------------------------





----------------------------------------------------------------------------------------------------------------------- */