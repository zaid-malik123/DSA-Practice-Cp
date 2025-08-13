 Bubble Sort Algorithm
📌 Introduction
Bubble Sort is a simple comparison-based sorting algorithm.
It repeatedly compares adjacent elements and swaps them if they are in the wrong order.
After each pass, the largest element moves to the end — like bubbles rising to the surface.

🛠️ Requirements
Works on any array or list with comparable elements.

Can sort in ascending or descending order (with a small change in condition).

📋 Steps (Ascending Order)
Let n be the size of the array.

For i from 0 to n - 2:

For j from 0 to n - i - 2:

If arr[j] > arr[j+1] → Swap arr[j] and arr[j+1].

Repeat until no swaps are needed (array is sorted).

💻 Pseudocode
cpp
Copy
Edit
procedure bubbleSort(arr, n):
    for i = 0 to n-2:
        for j = 0 to n-i-2:
            if arr[j] > arr[j+1]:
                swap(arr[j], arr[j+1])
📊 Complexity
Time Complexity:

Worst Case: O(n²) (array is in reverse order)

Best Case: O(n) (array already sorted, with optimization)

Space Complexity: O(1) (in-place sorting)

💡 When to Use
When the dataset is small.

When the array is almost sorted and you can use the optimized version (stop if no swaps occur).

For teaching purposes to understand sorting concepts.

📝 Example
Input:
[5, 3, 4, 1, 2]

Output (Ascending):
[1, 2, 3, 4, 5]