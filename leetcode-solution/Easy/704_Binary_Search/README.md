🔎 LeetCode 704. Binary Search

Problem Link: https://leetcode.com/problems/binary-search/

🧠 Problem Statement:

Given a sorted array of integers nums and an integer target, return the index of target if it exists, otherwise return -1.

You must write an algorithm with O(log n) runtime complexity.

🔸 Example:

Input:
nums = [-1,0,3,5,9,12], target = 9

Output:
4

Explanation:

The value 9 exists in the array at index 4.

Input:
nums = [-1,0,3,5,9,12], target = 2

Output:
-1

Explanation:

The value 2 does not exist in the array.

🚀 Approach
Binary Search Idea:

Use two pointers → start = 0 and end = n-1.

While start <= end:

Find mid = start + (end - start) / 2.

If nums[mid] == target → return mid.

If nums[mid] < target → search right half (start = mid + 1).

Else → search left half (end = mid - 1).

If not found, return -1.

⏱️ Time Complexity: O(log n)
💾 Space Complexity: O(1)