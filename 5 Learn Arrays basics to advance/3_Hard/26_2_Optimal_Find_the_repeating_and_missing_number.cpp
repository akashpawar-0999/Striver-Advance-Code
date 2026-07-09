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

        int n = nums.size();                        // Store the size of the array.
        int repeating = -1;                         // Stores the repeating number.

        // Mark visited indices by making the value at
        // the corresponding index negative.
        for (int i = 0; i < n; i++) {

            int value = abs(nums[i]);               // Get the absolute value of the current element.

            if (nums[value - 1] > 0) {              // If this index has not been visited yet,
                nums[value - 1] = -nums[value - 1]; // mark it as visited by making it negative.
            }
            else {                                  // If it is already negative,
                repeating = value;                  // then this value is repeating.
            }
        }

        int missing = -1;                           // Stores the missing number.

        // The index that still contains a positive value
        // corresponds to the missing number.
        for (int i = 0; i < n; i++) {

            if (nums[i] > 0) {                      // Positive means this index was never visited.
                missing = i + 1;                    // Missing number is index + 1.
                break;                              // Missing number found.
            }
        }

        return {repeating, missing};                // Return [repeating, missing].
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