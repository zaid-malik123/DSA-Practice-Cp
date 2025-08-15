# Bubble Sort

## 📌 Definition
Bubble Sort is a simple comparison-based sorting algorithm.  
It repeatedly compares **adjacent elements** and swaps them if they are in the wrong order, causing larger elements to "bubble up" to the end of the array.

💡 **Memory Trick:**  
Bubble = Compare with Next


---

## ⚙ How It Works
1. Start from the first element and compare it with the next element.
2. If the current element is greater than the next, swap them.
3. Continue this process for the entire array.
4. After each pass, the largest element will be at its correct position at the end.
5. Reduce the range of comparison for each pass, since the last part is already sorted.
6. Repeat until the array is sorted.

---

## 📝 Pseudocode
```cpp
for i = 0 to n-2:
    for j = 0 to n-i-2:
        if arr[j] > arr[j+1]:
            swap(arr[j], arr[j+1])

🖥 Example Dry Run
Input:
[5, 3, 8, 4]


Pass 1:
Compare (5,3) → swap → [3, 5, 8, 4]
Compare (5,8) → no swap
Compare (8,4) → swap → [3, 5, 4, 8]

Pass 2:
Compare (3,5) → no swap
Compare (5,4) → swap → [3, 4, 5, 8]

Pass 3:
Compare (3,4) → no swap

✅ Final Sorted Array:

[3, 4, 5, 8]