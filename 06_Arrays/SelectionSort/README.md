# Selection Sort

## 📌 Definition
Selection Sort is a simple comparison-based sorting algorithm.  
It repeatedly **selects the smallest element** from the unsorted portion of the array and swaps it with the element at the current position.

💡 **Memory Trick:**  
Selection = Select the Smallest


---

## ⚙ How It Works
1. Divide the array into **sorted** and **unsorted** parts.
2. Initially, the sorted part is empty, and the unsorted part is the entire array.
3. Find the **minimum element** in the unsorted part.
4. Swap it with the first element of the unsorted part.
5. Expand the sorted part by one position and shrink the unsorted part.
6. Repeat until the array is sorted.

---

## 📝 Pseudocode
```cpp
for i = 0 to n-2:
    minIndex = i
    for j = i+1 to n-1:
        if arr[j] < arr[minIndex]:
            minIndex = j
    swap(arr[i], arr[minIndex])

🖥 Example Dry Run
Input:
[10, 8, 2, 3, 1, 4]


Pass 1:
Find smallest from [10, 8, 2, 3, 1, 4] → 1 at index 4 → Swap with index 0

[1, 8, 2, 3, 10, 4]


Pass 2:
Find smallest from [8, 2, 3, 10, 4] → 2 at index 2 → Swap with index 1

[1, 2, 8, 3, 10, 4]


Pass 3:
Find smallest from [8, 3, 10, 4] → 3 at index 3 → Swap with index 2

[1, 2, 3, 8, 10, 4]


Pass 4:
Find smallest from [8, 10, 4] → 4 at index 5 → Swap with index 3

[1, 2, 3, 4, 10, 8]


Pass 5:
Find smallest from [10, 8] → 8 at index 5 → Swap with index 4

[1, 2, 3, 4, 8, 10]


✅ Final Sorted Array:

[1, 2, 3, 4, 8, 10]