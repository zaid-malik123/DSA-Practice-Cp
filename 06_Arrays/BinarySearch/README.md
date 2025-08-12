# 🔍 Binary Search Algorithm

## 📌 Introduction
Binary Search is a **searching algorithm** that works on a **sorted array**.  
At each step, it checks the middle element and decides whether to search in the left half or the right half.  
Since it discards half of the array at every step, its performance is **O(log n)**.

---

## 🛠️ Requirements
- The array **must be sorted** (Ascending or Descending order)
- Random access should be possible (like in arrays)

---

## 📋 Steps (For Ascending Order)
1. Set the start index (`s = 0`) and the end index (`e = n - 1`).
2. While `s <= e`:
   - Find the middle index:  
     ```
     mid = s + (e - s) / 2
     ```
   - If `arr[mid] == target` → **Element found** (return mid)
   - If `arr[mid] < target` → The target lies in the right half → `s = mid + 1`
   - If `arr[mid] > target` → The target lies in the left half → `e = mid - 1`
3. If the loop ends and the element is not found → **Element not found** (return -1)

---

## 💻 Pseudocode
