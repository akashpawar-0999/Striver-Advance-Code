# 🚀 DSA Pattern-Wise Master Sheet

A complete **DSA Pattern-Wise Master Sheet** for learning, revision, and LeetCode practice.

The main goal is to identify the **pattern behind a problem** before writing code.

---

# 📌 Master DSA Patterns

| #  | Pattern                       | Priority |
| -- | ----------------------------- | -------- |
| 1  | Hashing / Frequency Map       | ⭐⭐⭐⭐⭐    |
| 2  | Two Pointers                  | ⭐⭐⭐⭐⭐    |
| 3  | Sliding Window                | ⭐⭐⭐⭐⭐    |
| 4  | Prefix Sum                    | ⭐⭐⭐⭐⭐    |
| 5  | Difference Array              | ⭐⭐⭐      |
| 6  | Kadane's Algorithm            | ⭐⭐⭐⭐     |
| 7  | Binary Search                 | ⭐⭐⭐⭐⭐    |
| 8  | Binary Search on Answer       | ⭐⭐⭐⭐⭐    |
| 9  | Sorting + Greedy              | ⭐⭐⭐⭐⭐    |
| 10 | Fast & Slow Pointers          | ⭐⭐⭐⭐     |
| 11 | Stack                         | ⭐⭐⭐⭐⭐    |
| 12 | Monotonic Stack               | ⭐⭐⭐⭐⭐    |
| 13 | Monotonic Queue / Deque       | ⭐⭐⭐⭐     |
| 14 | Heap / Priority Queue         | ⭐⭐⭐⭐⭐    |
| 15 | Top K Elements                | ⭐⭐⭐⭐⭐    |
| 16 | Merge Intervals               | ⭐⭐⭐⭐     |
| 17 | Cyclic Sort                   | ⭐⭐⭐⭐     |
| 18 | Linked List Reversal          | ⭐⭐⭐⭐     |
| 19 | Tree DFS                      | ⭐⭐⭐⭐⭐    |
| 20 | Tree BFS                      | ⭐⭐⭐⭐⭐    |
| 21 | Tree Construction / Recursion | ⭐⭐⭐⭐     |
| 22 | BST Patterns                  | ⭐⭐⭐⭐     |
| 23 | Graph DFS                     | ⭐⭐⭐⭐⭐    |
| 24 | Graph BFS                     | ⭐⭐⭐⭐⭐    |
| 25 | Multi-Source BFS              | ⭐⭐⭐⭐     |
| 26 | Topological Sort              | ⭐⭐⭐⭐⭐    |
| 27 | Union Find / DSU              | ⭐⭐⭐⭐     |
| 28 | Shortest Path                 | ⭐⭐⭐⭐⭐    |
| 29 | Backtracking                  | ⭐⭐⭐⭐⭐    |
| 30 | 1D Dynamic Programming        | ⭐⭐⭐⭐⭐    |
| 31 | 2D Dynamic Programming        | ⭐⭐⭐⭐⭐    |
| 32 | Knapsack DP                   | ⭐⭐⭐⭐⭐    |
| 33 | LCS / String DP               | ⭐⭐⭐⭐     |
| 34 | LIS / Subsequence DP          | ⭐⭐⭐⭐     |
| 35 | Interval DP                   | ⭐⭐⭐      |
| 36 | Greedy                        | ⭐⭐⭐⭐⭐    |
| 37 | Trie                          | ⭐⭐⭐⭐     |
| 38 | Bit Manipulation              | ⭐⭐⭐⭐     |
| 39 | Matrix / Grid                 | ⭐⭐⭐⭐⭐    |
| 40 | Divide & Conquer              | ⭐⭐⭐⭐     |

---

# 🔥 Sliding Window — Complete Pattern Sheet

### Master Idea

> **Expand right → maintain window state → if invalid, move left → update answer/count.**

Sliding Window is mainly used for **subarrays/substrings**, especially problems involving:

* Longest
* Shortest
* Count
* Fixed K
* At Most K
* Exactly K
* At Least K
* Frequencies
* Window constraints

---

# 🟢 1. Two Pointers

## Problems

* [LC 11 — Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
* [LC 15 — 3Sum](https://leetcode.com/problems/3sum/)
* [LC 16 — 3Sum Closest](https://leetcode.com/problems/3sum-closest/)
* [LC 18 — 4Sum](https://leetcode.com/problems/4sum/)
* [LC 167 — Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
* [LC 453 — Minimum Moves to Equal Array Elements](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)
* [LC 462 — Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/)
* [LC 881 — Boats to Save People](https://leetcode.com/problems/boats-to-save-people/)
* [LC 1679 — Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/)
* [LC 2491 — Divide Players Into Teams of Equal Skill](https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/)
* [LC 2563 — Count the Number of Fair Pairs](https://leetcode.com/problems/count-the-number-of-fair-pairs/)
* [LC 2401 — Longest Nice Subarray](https://leetcode.com/problems/longest-nice-subarray/)

## Core Idea

Move `left` and `right` based on whether the current condition is too small or too large.

## Types

* Opposite Direction Two Pointer
* Same Direction / Fast & Slow Pointer
* Sorting + Two Pointer

## When to Use

Keywords:

* sorted array
* pair
* triplet
* closest
* target sum
* maximize/minimize

## Basic Steps

```text
sort

left = 0
right = n - 1

while left < right:
    check condition
    move left/right
```

## Complexity

**Time:** `O(n log n)` after sorting, or `O(n)` if already sorted.

---

# 🟢 2. Sliding Window

## Problems

* [LC 3 — Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
* [LC 209 — Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)
* [LC 395 — Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/)
* [LC 424 — Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)
* [LC 713 — Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/)
* [LC 904 — Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/)
* [LC 1004 — Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/)
* [LC 1343 — Number of Sub-arrays of Size K](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/)
* [LC 1438 — Longest Continuous Subarray](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/)
* [LC 1456 — Maximum Number of Vowels](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/)
* [LC 2405 — Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/)
* [LC 2461 — Maximum Sum of Distinct Subarrays](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/)
* [LC 2958 — Longest Subarray With at Most K Frequency](https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/)
* LC 3305 — Vowels + K Consonants I
* LC 3306 — Vowels + K Consonants II

## Core Idea

Maintain a valid window:

```text
[left ........ right]
```

Expand with `right`.

Shrink with `left` when the window becomes invalid.

## Template

```cpp
int left = 0;
int ans = 0;

for (int right = 0; right < n; right++) {

    add(nums[right]);

    while (window_invalid) {
        remove(nums[left]);
        left++;
    }

    ans = max(ans, right - left + 1);
}
```

## Recognition

Think Sliding Window when you see:

* longest substring
* shortest subarray
* at most K
* exactly K
* frequency
* consecutive
* window of size K

## Complexity

**Time:** `O(n)`
**Space:** Depends on maintained state, usually `O(k)` or `O(n)`.

---

# 🟢 3. Fixed Size Sliding Window

## When to Use

Use when the window size is exactly `K`.

## Keywords

* size K
* length K
* every K elements
* maximum/minimum/average of K
* substring of length K

## Template

```cpp
int left = 0;
long long sum = 0;

for (int right = 0; right < n; right++) {

    sum += nums[right];

    if (right - left + 1 > k) {
        sum -= nums[left];
        left++;
    }

    if (right - left + 1 == k) {
        // process window
    }
}
```

## Problems

* LC 643 — Maximum Average Subarray I
* LC 1343 — Number of Sub-arrays of Size K
* LC 2461 — Maximum Sum of Distinct Subarrays With Length K
* LC 2090 — K Radius Subarray Averages
* LC 1456 — Maximum Number of Vowels
* LC 438 — Find All Anagrams in a String
* LC 567 — Permutation in String
* LC 1052 — Grumpy Bookstore Owner
* LC 1423 — Maximum Points You Can Obtain from Cards

## Complexity

**Time:** `O(n)`
**Space:** `O(1)` or `O(k)` depending on the window state.

---

# 🟢 4. HashMap / HashSet

## Problems

* LC 1 — Two Sum
* LC 128 — Longest Consecutive Sequence
* LC 217 — Contains Duplicate
* LC 287 — Find the Duplicate Number
* LC 347 — Top K Frequent Elements
* LC 451 — Sort Characters By Frequency
* LC 523 — Continuous Subarray Sum
* LC 560 — Subarray Sum Equals K
* LC 692 — Top K Frequent Words
* LC 792 — Number of Matching Subsequences
* LC 2958 — At Most K Frequency
* LC 3016 — Minimum Number of Pushes

## Core Idea

Store:

```text
value → frequency
value → index
prefix → frequency
character → frequency
```

## Recognition

Keywords:

* frequency
* duplicate
* count
* occurrence
* lookup
* complement
* last position

## Complexity

**Time:** Average `O(n)`
**Space:** `O(n)`.

---

# 🟢 5. Prefix Sum

## Problems

* LC 523 — Continuous Subarray Sum
* LC 525 — Contiguous Array
* LC 560 — Subarray Sum Equals K
* LC 2270 — Number of Ways to Split Array

## Core Idea

```text
prefix[j] - prefix[i] = target
```

Usually combined with a HashMap.

## Recognition

Keywords:

* subarray sum
* range sum
* sum equals K
* divisible by K
* count subarrays

## Complexity

**Time:** `O(n)`
**Space:** `O(n)`.

---

# 🟢 6. Binary Search

## Problems

* LC 33 — Search in Rotated Sorted Array
* LC 34 — Find First and Last Position
* LC 81 — Search in Rotated Sorted Array II
* LC 153 — Find Minimum in Rotated Sorted Array
* LC 162 — Find Peak Element
* LC 540 — Single Element in a Sorted Array
* LC 852 — Peak Index in a Mountain Array
* LC 1901 — Find a Peak Element II
* LC 2517 — Maximum Tastiness of Candy Basket

## Core Idea

The search space is monotonic.

```text
left ---- mid ---- right
```

## Recognition

Keywords:

* sorted
* minimum possible
* maximum possible
* first/last
* peak
* rotated
* answer optimization

## Complexity

**Time:** `O(log n)`
**Binary Search on Answer:** `O(n log answer)`.

---

# 🟢 7. Sorting

## Problems

* LC 75 — Sort Colors
* LC 912 — Sort an Array
* LC 215 — Kth Largest Element
* LC 347 — Top K Frequent Elements
* LC 451 — Sort Characters By Frequency
* LC 692 — Top K Frequent Words
* LC 324 — Wiggle Sort II
* LC 2149 — Rearrange Array Elements by Sign
* LC 2295 — Replace Elements
* LC 2491 — Divide Players
* LC 2563 — Fair Pairs

## Core Idea

Sort first when ordering simplifies the problem.

## Recognition

Keywords:

* smallest/largest
* pair/triplet
* frequency ordering
* intervals
* greedy after sorting

## Complexity

**Time:** `O(n log n)`
**Space:** Depends on the sorting algorithm.

---

# 🟢 8. Stack / Monotonic Stack

## Problems

* LC 20 — Valid Parentheses
* LC 42 — Trapping Rain Water
* LC 84 — Largest Rectangle in Histogram
* LC 150 — Evaluate Reverse Polish Notation
* LC 394 — Decode String
* LC 402 — Remove K Digits
* LC 503 — Next Greater Element II
* LC 556 — Next Greater Element III
* LC 678 — Valid Parenthesis String
* LC 739 — Daily Temperatures
* LC 921 — Minimum Add to Make Parentheses Valid
* LC 1209 — Remove All Adjacent Duplicates II
* LC 2390 — Removing Stars
* LC 2104 — Sum of Subarray Ranges

## Core Idea

Use a stack when the previous/next greater/smaller element matters.

## Recognition

Keywords:

* next greater
* next smaller
* remove elements
* parentheses
* nested
* previous greater
* monotonic

## Complexity

**Time:** Usually `O(n)`
**Space:** Usually `O(n)`.

---

# 🟢 9. Greedy

## Problems

* LC 45 — Jump Game II
* LC 55 — Jump Game
* LC 738 — Monotone Increasing Digits
* LC 769 — Max Chunks To Make Sorted
* LC 846 — Hand of Straights
* LC 1338 — Reduce Array Size to Half
* LC 1481 — Least Number of Unique Integers
* LC 2244 — Minimum Rounds
* LC 2870 — Minimum Operations to Make Array Empty
* LC 3016 — Minimum Number of Pushes

## Core Idea

Make the best local decision that leads to the global optimum.

## Recognition

Keywords:

* minimum operations
* maximum possible
* choose largest/smallest
* scheduling
* intervals
* jumps

## Complexity

**Time:** Usually `O(n)` or `O(n log n)`
**Space:** Depends on the implementation.

---

# 🟢 10. Backtracking

## Problems

* LC 17 — Letter Combinations of Phone Number
* LC 22 — Generate Parentheses
* LC 39 — Combination Sum
* LC 40 — Combination Sum II
* LC 46 — Permutations
* LC 47 — Permutations II
* LC 77 — Combinations
* LC 78 — Subsets
* LC 90 — Subsets II
* LC 131 — Palindrome Partitioning
* LC 216 — Combination Sum III
* LC 491 — Non-decreasing Subsequences
* LC 698 — Partition to K Equal Sum Subsets
* LC 784 — Letter Case Permutation
* LC 980 — Unique Paths III
* LC 473 — Matchsticks to Square

## Core Idea

```text
choose
→ explore
→ undo
```

## Recognition

Keywords:

* all combinations
* all permutations
* all subsets
* generate
* partition
* choose K

## Complexity

Usually exponential:

```text
O(2^n)
O(n!)
```

---

# 🟢 11. Dynamic Programming

## Problems

* LC 62 — Unique Paths
* LC 63 — Unique Paths II
* LC 64 — Minimum Path Sum
* LC 70 — Climbing Stairs
* LC 198 — House Robber
* LC 300 — Longest Increasing Subsequence
* LC 322 — Coin Change
* LC 377 — Combination Sum IV
* LC 416 — Partition Equal Subset Sum
* LC 494 — Target Sum
* LC 518 — Coin Change II
* LC 152 — Maximum Product Subarray
* LC 1749 — Maximum Absolute Sum

## Core Idea

Break a problem into overlapping subproblems.

```text
dp[state] = best/count answer for state
```

## Recognition

Keywords:

* maximum/minimum
* number of ways
* choose/not choose
* subsequence
* paths
* target sum
* coin

## Complexity

Usually:

```text
O(n)
O(n²)
O(n × target)
```

---

# 🟢 12. Linked List

## Problems

* LC 2 — Add Two Numbers
* LC 19 — Remove Nth Node From End
* LC 24 — Swap Nodes in Pairs
* LC 82 — Remove Duplicates II
* LC 92 — Reverse Linked List II
* LC 138 — Copy List
* LC 142 — Linked List Cycle II
* LC 143 — Reorder List
* LC 148 — Sort List
* LC 206 — Reverse Linked List
* LC 2095 — Delete Middle Node
* LC 2130 — Maximum Twin Sum
* LC 237 — Delete Node
* LC 2487 — Remove Nodes

## Core Patterns

* Fast & Slow Pointer
* Dummy Node
* Reverse Linked List
* Merge
* Cycle Detection

## Recognition

Keywords:

* linked list
* cycle
* nth from end
* reverse
* middle
* reorder

## Complexity

**Time:** Usually `O(n)`
**Space:** Usually `O(1)` auxiliary space.

---

# 🟢 13. Binary Tree / BST

## Problems

* LC 94 — Binary Tree Inorder Traversal
* LC 102 — Binary Tree Level Order Traversal
* LC 107 — Binary Tree Level Order Traversal II
* LC 1161 — Maximum Level Sum
* LC 129 — Sum Root to Leaf Numbers
* LC 222 — Count Complete Tree Nodes
* LC 230 — Kth Smallest Element in BST
* LC 2471 — Minimum Operations to Sort Binary Tree by Level
* LC 2583 — Kth Largest Sum in Binary Tree

## Core Patterns

* DFS
* BFS
* Inorder
* Preorder
* Postorder
* Level Order

## Recognition

Keywords:

* tree
* level
* depth
* path
* root-to-leaf
* BST
* kth smallest/largest

## Complexity

**Time:** `O(n)`
**Space:** `O(h)` for recursive DFS, where `h` is tree height.

---

# 🟢 14. Graph / Grid

## Problems

* LC 200 — Number of Islands
* LC 547 — Number of Provinces
* LC 2257 — Count Unguarded Cells
* LC 1901 — Find a Peak Element II

## Core Patterns

* DFS
* BFS
* Flood Fill
* Connected Components
* Matrix Traversal

## Recognition

Keywords:

* islands
* connected
* adjacent
* grid
* province
* path

## Complexity

**Time:** Usually `O(V + E)` or `O(rows × cols)`
**Space:** Usually `O(V)` or `O(rows × cols)`.

---

# 🟢 15. Bit Manipulation ⭐

## Problems

* LC 137 — Single Number II
* LC 260 — Single Number III
* LC 421 — Maximum XOR
* LC 477 — Total Hamming Distance
* LC 1318 — Minimum Flips OR
* LC 1780 — Sum of Powers of Three
* LC 1980 — Find Unique Binary String
* LC 2044 — Maximum Bitwise OR Subsets
* LC 2997 — Minimum Operations XOR Equal K
* LC 2401 — Longest Nice Subarray

## Essential Operations

```cpp
n & 1
n >> 1
n << 1
a ^ b
a & b
a | b
~a
```

## Important Tricks

### XOR

```text
x ^ x = 0
x ^ 0 = x
```

### Power of 2

```cpp
n > 0 && (n & (n - 1)) == 0
```

### Set Bit

```cpp
n | (1 << i)
```

### Clear Bit

```cpp
n & ~(1 << i)
```

### Check Bit

```cpp
n & (1 << i)
```

### Clear Rightmost Set Bit

```cpp
n = n & (n - 1);
```

### Isolate Rightmost Set Bit

```cpp
diff = n & (-n);
```

### Toggle Bit

```cpp
n ^ (1 << i);
```

## Complexity

**Time:** Usually `O(n × bits)`
**Space:** Usually `O(1)`.

---

# 🟢 16. String

## Problems

* LC 3 — Longest Substring Without Repeating
* LC 43 — Multiply Strings
* LC 151 — Reverse Words
* LC 1839 — Longest Beautiful Substring
* LC 2405 — Optimal Partition
* LC 2981 — Special Substring
* LC 3016 — Minimum Pushes
* LC 3305 — Vowel Substrings
* LC 3306 — Vowel Substrings

## Common Techniques

* Frequency Array
* HashMap
* Sliding Window
* Stack
* Two Pointer
* String Building
* Lexicographical Comparison

---

# 🟢 17. Math / Number Theory

## Problems

* LC 7 — Reverse Integer
* LC 29 — Divide Two Integers
* LC 43 — Multiply Strings
* LC 172 — Factorial Trailing Zeroes
* LC 453 — Minimum Moves
* LC 462 — Minimum Moves II
* LC 1780 — Sum of Powers of Three
* LC 3918 — Sum of Primes
* LC 3974 — Maximum Total Sum
* LC 3979 — Maximum Valid Pair Sum
* LC 3747 — Distinct Integers
* LC 3932 — K-th Roots

## Must Know

* GCD
* LCM
* Prime
* Sieve
* Modulo
* Power
* Binary Conversion
* Decimal ↔ Binary
* Decimal ↔ Hexadecimal

---

# 🟢 18. Heap / Priority Queue

## Problems

* LC 215 — Kth Largest Element
* LC 347 — Top K Frequent Elements
* LC 692 — Top K Frequent Words
* LC 2583 — Kth Largest Sum
* LC 3759 — Count Elements With K Greater Values
* LC 3974 — Maximum Total Sum

## Core Idea

For K largest elements:

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

Maintain only K elements.

## Recognition

Keywords:

* top K
* kth largest
* kth smallest
* most frequent
* continuously select min/max

## Complexity

**Time:** Usually `O(n log k)`
**Space:** `O(k)`.

---

# 🟢 19. Prefix / Suffix

## Problems

* LC 238 — Product of Array Except Self
* LC 53 — Maximum Subarray
* LC 2270 — Number of Ways to Split Array
* LC 3121 — Special Characters II
* LC 3818 — Minimum Prefix Removal

## Core Idea

Precompute information from the left/right.

```text
prefix[i]
suffix[i]
```

Useful when each element needs information from both sides.

---

# 🟢 20. Interval / Range

## Problems

* LC 56 — Merge Intervals
* LC 57 — Insert Interval
* LC 986 — Interval List Intersections
* LC 1029 — Two City Scheduling
* LC 1235 — Maximum Profit in Job Scheduling
* LC 2563 — Fair Pairs
* LC 2270 — Split Array

## Pattern

```text
sort by start
→ compare current with previous
→ merge/update
```

## Complexity

**Time:** `O(n log n)`
**Space:** Depends on the output and implementation.

---

# 🟢 21. Matrix

## Problems

* LC 48 — Rotate Image
* LC 54 — Spiral Matrix
* LC 64 — Minimum Path Sum
* LC 73 — Set Matrix Zeroes
* LC 74 — Search a 2D Matrix
* LC 1901 — Peak Element II
* LC 200 — Number of Islands
* LC 2257 — Count Unguarded Cells

## Important Patterns

* Row/column traversal
* Boundary traversal
* DFS/BFS
* Matrix binary search
* In-place marking

---

# 🟢 22. Recursion

## Problems

```text
17
22
39
40
46
47
77
78
90
131
216
491
698
784
```

## Core Formula

```cpp
function(state) {

    if (base_case)
        return;

    choose;
    function(next_state);
    undo;
}
```

---

# 🟢 23. Monotonic / Order Patterns

## Problems

* LC 739 — Daily Temperatures
* LC 503 — Next Greater Element II
* LC 556 — Next Greater Element III
* LC 2104 — Sum of Subarray Ranges
* LC 402 — Remove K Digits
* LC 738 — Monotone Increasing Digits
* LC 1839 — Longest Beautiful Substring
* LC 2414 — Alphabetical Continuous String

## Recognition

If the question says:

* next greater
* next smaller
* previous greater
* previous smaller
* monotonic
* increasing/decreasing

Think:

> 🔥 Monotonic Stack

---

# 🟢 24. XOR / Prefix XOR

## Problems

* LC 136 — Single Number
* LC 137 — Single Number II
* LC 260 — Single Number III
* LC 421 — Maximum XOR
* LC 477 — Total Hamming Distance
* LC 2044 — Maximum OR
* LC 2997 — XOR Equal K
* LC 3702 — Non-Zero XOR

## Core Rules

```text
a ^ a = 0
a ^ 0 = a
a ^ b = b ^ a
```

---

# 🟢 25. HashMap + Prefix Sum ⭐

This is a very important combined pattern.

## Problems

* LC 523 — Continuous Subarray Sum
* LC 525 — Contiguous Array
* LC 560 — Subarray Sum Equals K
* LC 974 — Subarrays Divisible by K
* LC 1248 — Count Number of Nice Subarrays

## Template

```cpp
unordered_map<int,int> mp;

mp[0] = 1;

int prefix = 0;

for (int x : nums) {

    prefix += x;

    if (mp.count(prefix - k))
        ans += mp[prefix - k];

    mp[prefix]++;
}
```

---

# 🟢 26. HashMap + Sliding Window ⭐

## Problems

* LC 3
* LC 424
* LC 904
* LC 1004
* LC 1438
* LC 1456
* LC 2461
* LC 2958
* LC 3305
* LC 3306

## Recognition

```text
substring/subarray
+
frequency
+
at most K
+
longest/shortest
```

Therefore:

> Sliding Window + HashMap

---

# 🟢 27. Sorting + Greedy ⭐

## Problems

* LC 846
* LC 1296
* LC 1338
* LC 1481
* LC 1679
* LC 2244
* LC 2491
* LC 2563
* LC 2517
* LC 3974

## Recognition

If sorting creates an obvious order of decisions:

```text
sort
↓
greedy selection
```

---

# 🟢 28. Sorting + Two Pointer ⭐

## Problems

* LC 15 — 3Sum
* LC 16 — 3Sum Closest
* LC 18 — 4Sum
* LC 1679 — K-Sum Pairs
* LC 2491 — Divide Players
* LC 2563 — Fair Pairs
* LC 2517 — Maximum Tastiness

## Template

```cpp
sort(nums.begin(), nums.end());

int left = 0;
int right = nums.size() - 1;

while (left < right) {

}
```

---

# 🟢 29. DFS / BFS

## DFS Problems

* LC 200 — Number of Islands
* LC 547 — Number of Provinces
* LC 102 — Binary Tree Level Order
* LC 107 — Level Order II
* LC 129 — Sum Root to Leaf
* LC 1161 — Maximum Level Sum

## BFS Recognition

Think BFS when you see:

* level
* minimum steps
* shortest path
* nearest
* distance

## DFS Recognition

Think DFS when you see:

* connected
* explore all
* island
* component
* tree traversal

---

# 🟢 30. Quick Pattern Recognition 🔥

| Problem Trait              | Think                        |
| -------------------------- | ---------------------------- |
| Pair + sorted              | Two Pointer                  |
| 3Sum / 4Sum                | Sort + Two Pointer           |
| Longest substring          | Sliding Window               |
| At most K                  | Sliding Window               |
| Exactly K                  | AtMost(K) − AtMost(K−1)      |
| Frequency                  | HashMap                      |
| Subarray Sum K             | Prefix Sum + HashMap         |
| Sorted array               | Binary Search                |
| Rotated sorted             | Binary Search                |
| Top K                      | Heap                         |
| Next Greater               | Monotonic Stack              |
| Parentheses                | Stack                        |
| Generate all               | Backtracking                 |
| All subsets                | Backtracking                 |
| All permutations           | Backtracking                 |
| Number of ways             | DP                           |
| Min/Max choices            | DP / Greedy                  |
| Tree level                 | BFS                          |
| Tree path                  | DFS                          |
| Islands                    | DFS/BFS                      |
| Connected components       | DFS/BFS                      |
| XOR                        | Bit Manipulation             |
| Single Number              | XOR                          |
| Prime range                | Sieve                        |
| GCD                        | Euclidean Algorithm          |
| Matrix rotation            | Matrix/In-place              |
| Intervals                  | Sort + Greedy                |
| Kth largest                | Heap / Quickselect           |
| Lexicographically smallest | Greedy / Stack / Two Pointer |

---

# ⚡ One-Line Memory Trick

```text
PAIR              → TWO POINTER
WINDOW            → SLIDING WINDOW
FREQUENCY         → HASHMAP
SUBARRAY SUM      → PREFIX SUM
SORTED            → BINARY SEARCH
TOP K             → HEAP
NEXT GREATER      → MONOTONIC STACK
ALL POSSIBILITIES → BACKTRACKING
NUMBER OF WAYS    → DP
TREE LEVEL        → BFS
TREE PATH         → DFS
ISLAND            → DFS/BFS
XOR               → BIT
INTERVAL          → SORT + GREEDY
PRIME             → SIEVE
GCD               → EUCLIDEAN
```

---

# 🧠 Sliding Window — Detailed Patterns

## 1️⃣ Fixed Size Window — K

### When to Use

Use when the window size is exactly `K`.

### Keywords

* size K
* length K
* every K elements
* maximum/minimum/average of K
* substring of length K

### C++ Template

```cpp
int left = 0;
long long sum = 0;

for (int right = 0; right < n; right++) {

    sum += nums[right];

    if (right - left + 1 > k) {
        sum -= nums[left];
        left++;
    }

    if (right - left + 1 == k) {
        // process window
    }
}
```

### Practice

* LC 643
* LC 1343
* LC 2461
* LC 2090
* LC 1456
* LC 438
* LC 567
* LC 1052
* LC 1423

---

# 2️⃣ Variable Size — Longest Valid Window

### When to Use

Find the longest subarray/substring satisfying a condition.

### Template

```cpp
int left = 0;
int ans = 0;

for (int right = 0; right < n; right++) {

    // add nums[right]

    while (window is invalid) {

        // remove nums[left]
        left++;
    }

    ans = max(ans, right - left + 1);
}
```

### Keywords

* longest substring
* longest subarray
* maximum length
* longest valid window

---

# 3️⃣ At Most K

### When to Use

The window can contain at most K:

* occurrences
* distinct elements
* violations
* zeros
* odd numbers

### Template

```cpp
int left = 0;
int ans = 0;

for (int right = 0; right < n; right++) {

    // add nums[right]

    while (condition > k) {

        // remove nums[left]
        left++;
    }

    ans = max(ans, right - left + 1);
}
```

---

# 4️⃣ At Least K / Minimum Window

### When to Use

Find the smallest window satisfying a condition.

### Template

```cpp
int left = 0;
int ans = INT_MAX;

for (int right = 0; right < n; right++) {

    // add nums[right]

    while (window is valid) {

        ans = min(ans, right - left + 1);

        // remove nums[left]
        left++;
    }
}
```

### Keywords

* minimum length
* shortest substring
* smallest window
* minimum window

---

# 5️⃣ Exactly K

### Main Trick

```text
Exactly(K) = AtMost(K) - AtMost(K - 1)
```

### Template

```cpp
long long exactlyK(vector<int>& nums, int k) {
    return atMost(nums, k) - atMost(nums, k - 1);
}
```

---

# 6️⃣ Count All Valid Subarrays

### When to Use

When the question asks:

* How many subarrays?
* Count subarrays satisfying condition
* Number of substrings

### Key Formula

When the current window `[left ... right]` is valid:

```cpp
count += right - left + 1;
```

### Template

```cpp
long long ans = 0;
int left = 0;

for (int right = 0; right < n; right++) {

    // add nums[right]

    while (window is invalid) {

        // remove nums[left]
        left++;
    }

    ans += right - left + 1;
}
```

---

# 7️⃣ Frequency Map Window

### When to Use

Use when the condition depends on frequency/count of characters or values.

### Template

```cpp
unordered_map<char, int> freq;

int left = 0;

for (int right = 0; right < n; right++) {

    freq[s[right]]++;

    while (/* invalid frequency condition */) {

        freq[s[left]]--;

        if (freq[s[left]] == 0)
            freq.erase(s[left]);

        left++;
    }

    // process window
}
```

---

# 8️⃣ Distinct Elements

### When to Use

Problems involving:

* unique elements
* distinct characters
* no duplicate
* K distinct values

### Template

```cpp
unordered_map<int, int> freq;

int left = 0;

for (int right = 0; right < n; right++) {

    freq[nums[right]]++;

    while (freq.size() > k) {

        freq[nums[left]]--;

        if (freq[nums[left]] == 0)
            freq.erase(nums[left]);

        left++;
    }

    // valid window
}
```

---

# 9️⃣ No Repeating Characters

### When to Use

Find the longest substring with unique characters.

### Template

```cpp
unordered_map<char, int> freq;

int left = 0;
int ans = 0;

for (int right = 0; right < s.size(); right++) {

    freq[s[right]]++;

    while (freq[s[right]] > 1) {

        freq[s[left]]--;
        left++;
    }

    ans = max(ans, right - left + 1);
}
```

---

# 🔟 Character Replacement / Limited Changes

### When to Use

When you can modify/replace at most K elements.

### Typical Condition

```text
window size - most frequent element <= K
```

### Template

```cpp
unordered_map<char, int> freq;

int left = 0;
int maxFreq = 0;
int ans = 0;

for (int right = 0; right < s.size(); right++) {

    freq[s[right]]++;

    maxFreq = max(maxFreq, freq[s[right]]);

    while ((right - left + 1) - maxFreq > k) {

        freq[s[left]]--;
        left++;
    }

    ans = max(ans, right - left + 1);
}
```

---

# 1️⃣1️⃣ Binary Array Sliding Window

### When to Use

Useful for arrays containing:

```text
0 / 1
```

Especially:

* K zeros
* K ones
* longest sequence
* flips
* consecutive elements

### Example Condition

```cpp
while (zeros > k) {

    if (nums[left] == 0)
        zeros--;

    left++;
}
```

---

# 1️⃣2️⃣ Sliding Window + Set / HashSet

### When to Use

Use a set when you only care about presence/uniqueness rather than exact frequency.

### Template

```cpp
unordered_set<int> st;

int left = 0;

for (int right = 0; right < n; right++) {

    while (st.count(nums[right])) {

        st.erase(nums[left]);
        left++;
    }

    st.insert(nums[right]);

    // process window
}
```

---

# 1️⃣3️⃣ Sliding Window + Deque

### When to Use

Use when you need the maximum/minimum element of the current window efficiently.

### Typical Problems

* Sliding Window Maximum
* Sliding Window Minimum
* Maintain max/min while window moves

### Template

```cpp
deque<int> dq;

for (int right = 0; right < n; right++) {

    while (!dq.empty() && nums[dq.back()] <= nums[right])
        dq.pop_back();

    dq.push_back(right);

    if (dq.front() <= right - k)
        dq.pop_front();

    if (right >= k - 1) {
        // nums[dq.front()] = maximum
    }
}
```

---

# 1️⃣4️⃣ Two Sliding Windows

### When to Use

Useful when you need to compare:

* Exactly K
* At Most K
* At Least K

### Most Important Relationship

```text
Exactly K = AtMost(K) - AtMost(K - 1)
```

This pattern appears frequently in counting subarray problems.

---

# 1️⃣5️⃣ Sliding Window + Advanced State

### When to Use

Use when maintaining the window requires additional information such as:

* frequency maps
* prime factors
* character counts
* number of violations
* sum
* product
* bitmask
* sets
* deque
* multiple conditions

### General Template

```cpp
int left = 0;

for (int right = 0; right < n; right++) {

    // 1. Add right element
    add(nums[right]);

    // 2. Fix invalid window
    while (invalid()) {

        remove(nums[left]);
        left++;
    }

    // 3. Update answer
    updateAnswer(left, right);
}
```

---

# 🧠 Sliding Window Decision Tree

```text
Is it a contiguous subarray / substring?
                |
               YES
                |
        Is window size fixed?
          /             \
        YES              NO
         |                |
      Fixed K        Is it longest?
                      /      \
                    YES       NO
                     |         |
               Keep valid   Is it minimum?
               window          /     \
                              YES      NO
                               |         |
                         Shrink while   Count?
                         valid            |
                                         YES
                                          |
                                  AtMost / Exactly
```

---

# ⚡ 10-Second Interview Checklist

Before coding, ask:

1. Is it contiguous?
2. Is the window fixed or variable?
3. What makes the window invalid?
4. What state must I maintain?
5. When should left move?
6. Am I finding longest?
7. Am I finding shortest?
8. Am I counting?
9. Is it At Most K?
10. Can I use:

```text
Exactly K = AtMost(K) - AtMost(K - 1)
```

---

# 🚀 Personal Revision Order

## 🔥 Level 1 — Must Master

1. Sliding Window
2. Two Pointer
3. HashMap + HashSet
4. Binary Search
5. Prefix Sum
6. Stack / Monotonic Stack
7. Binary Tree DFS/BFS
8. Bit Manipulation

## 🔥 Level 2

1. Sorting + Greedy
2. Heap / Priority Queue
3. Backtracking
4. Linked List
5. Matrix
6. Basic DP

## 🔥 Level 3

1. Advanced DP
2. Graph Algorithms
3. Segment Tree
4. Advanced Bit Manipulation
5. Advanced String Algorithms

---

# 📚 Useful References

* [LeetCode](https://leetcode.com/)
* [LeetCode Problems](https://leetcode.com/problemset/)
* [LeetCode Discuss](https://leetcode.com/discuss/)

---

# 🎯 Goal

The objective is not just to memorize solutions.

The objective is:

```text
Read Problem
     ↓
Identify Keywords
     ↓
Recognize Pattern
     ↓
Choose Approach
     ↓
Write Code
     ↓
Analyze Complexity
     ↓
Practice Similar Problems
```

> **Pattern recognition is the key to solving DSA problems efficiently.**

---

## ⭐ Quick Revision

```text
PAIR              → TWO POINTER
WINDOW            → SLIDING WINDOW
FREQUENCY         → HASHMAP
SUBARRAY SUM      → PREFIX SUM
SORTED            → BINARY SEARCH
TOP K             → HEAP
NEXT GREATER      → MONOTONIC STACK
ALL POSSIBILITIES → BACKTRACKING
NUMBER OF WAYS    → DP
TREE LEVEL        → BFS
TREE PATH         → DFS
ISLAND            → DFS/BFS
XOR               → BIT
INTERVAL          → SORT + GREEDY
PRIME             → SIEVE
GCD               → EUCLIDEAN
```
