# Insertion Sort

## 📌 Definition
Insertion Sort ek simple sorting algorithm hai jo array ko **sorted** aur **unsorted** parts me divide karta hai.  
Ye unsorted part ka ek element uthata hai aur usko sorted part me **sahi position** me insert karta hai.

💡 **Memory Trick:**  
Insertion = Peeche Compare


---

## ⚙ How It Works
1. Array ke **second element** (index `1`) se start hota hai.
2. Current element ko `key` me store karta hai.
3. Usko **pichle elements** se compare karta hai.
4. Jab tak pichla element bada ho:
   - Pichle element ko ek step right shift karo.
5. `key` ko sahi position pe insert karo.
6. Ye process tab tak chalta hai jab tak pura array sorted na ho jaye.

---

## 📝 Pseudocode
```cpp
for i = 1 to n-1:
    key = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > key:
        arr[j+1] = arr[j]
        j = j - 1
    arr[j+1] = key

🖥 Example Dry Run
Input:
[5, 3, 8, 4]


Pass 1:
key = 3 → Compare with 5 → Shift 5 → Insert 3

[3, 5, 8, 4]


Pass 2:
key = 8 → Compare with 5 → No shift → Insert 8

[3, 5, 8, 4]


Pass 3:
key = 4 → Compare with 8 → Shift 8 → Compare with 5 → Shift 5 → Insert 4

[3, 4, 5, 8]


✅ Final Sorted Array:

[3, 4, 5, 8]    