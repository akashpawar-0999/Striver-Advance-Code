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

        int n = nums.size();                            // Store the size of the array.
        int xorValue = 0;                               // Stores XOR of all array elements and numbers from 1 to n.

        // Find XOR of all array elements and numbers from 1 to n.
        for (int i = 0; i < n; i++) {

            xorValue ^= nums[i];                        // XOR with array element.

            xorValue ^= (i + 1);                        // XOR with numbers from 1 to n.
        }

        // Find the rightmost set bit in xorValue.
        int setBit = xorValue & ~(xorValue - 1);

        int x = 0, y = 0;                               // These will store the missing and repeating numbers.

        // Divide numbers into two groups based on the rightmost set bit.
        for (int i = 0; i < n; i++) {

            // Divide array elements.
            if (nums[i] & setBit) {                     // If the set bit is present,
                x ^= nums[i];                           // XOR into first group.
            }
            else {                                      // Otherwise,
                y ^= nums[i];                           // XOR into second group.
            }

            // Divide numbers from 1 to n.
            if ((i + 1) & setBit) {                     // If the set bit is present,
                x ^= (i + 1);                           // XOR into first group.
            }
            else {                                      // Otherwise,
                y ^= (i + 1);                           // XOR into second group.
            }
        }

        // x and y contain the missing and repeating numbers,
        // but we don't know which is which yet.

        int missing, repeating;
        int count = 0;

        // Count how many times x appears in the array.
        for (int i = 0; i < n; i++) {

            if (nums[i] == x) {
                count++;
            }
        }

        if (count == 0) {                               // x is not present, so it is missing.
            missing = x;
            repeating = y;
        }
        else {                                          // x appears in the array, so it is repeating.
            missing = y;
            repeating = x;
        }

        return {repeating, missing};                    // Return [repeating, missing].
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