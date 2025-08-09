📖 What is an Array?
An array is a collection of elements of the same data type stored at contiguous memory locations.
It allows random access to elements using their index.

🧠 Key Points Learned
Arrays store only one data type.

Memory is allocated contiguously.

Indexing starts from 0.

cout << arr; will not print elements — it prints the memory address of the first element.

Use loops to traverse and print arrays.

// 1️⃣ Fixed size with full initialization
int arr1[5] = {1, 2, 3, 4, 5};

// 2️⃣ Size auto-detected
int arr2[] = {1, 2, 3};

// 3️⃣ Partial initialization (rest are 0)
int arr3[5] = {8, 4}; // {8, 4, 0, 0, 0}

// 4️⃣ All zero initialization
int arr4[5] = {0};

// 5️⃣ User input
int arr5[5];
for (int i = 0; i < 5; i++) {
    cin >> arr5[i];
}
