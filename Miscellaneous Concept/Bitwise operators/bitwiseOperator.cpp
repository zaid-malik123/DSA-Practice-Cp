// bitwise operator :-
// bitwise operator vo operator hote hai jo numbers ki bit pr kam karte hai.
// Jaise 5 ka binary hota hai 0101 — to bitwise operators directly in 0 aur 1 par kaam karte hain.
              
// | Operator | Name            | Example (`a = 5`, `b = 3`) | Explanation                 |         |                     |
// | -------- | --------------- | -------------------------- | --------------------------- | ------- | ------------------- |
// | `&`      | AND             | `5 & 3` → `1`              | 0101 & 0011 = 0001          |         |                     |
// | \`       | \`              | OR                         | \`5                         | 3`→`7\` | 0101 \| 0011 = 0111 |
// | `^`      | XOR             | `5 ^ 3` → `6`              | 0101 ^ 0011 = 0110          |         |                     |
// | `~`      | NOT (1's Comp.) | `~5` → `-6`                | Flips all bits of 5         |         |                     |
// | `<<`     | Left Shift      | `5 << 1` → `10`            | 0101 → 1010 (multiply by 2) |         |                     |
// | `>>`     | Right Shift     | `5 >> 1` → `2`             | 0101 → 0010 (divide by 2)   |         |                     |


// ^^:- ye agar bit same hote hai to answer deta hai 0
//           ex:- 0^0 = 0 ; 1^1 = 0
//      lekin agar bit diffrent hai to answer dega ye 1
//           ex:- 0^1 = 1 ; 1^0 = 1

// Left Shift :-

// | Expression | Explanation         | Result |
// | ---------- | ------------------- | ------ |
// | `5 << 1`   | `5 * 2`             | 10     |
// | `5 << 2`   | `5 * 2 * 2`         | 20     |
// | `5 << 3`   | `5 * 2 * 2 * 2`     | 40     |
// | `5 << 4`   | `5 * 2 * 2 * 2 * 2` | 80     |

// Right Shift 

// | Expression | Result |
// | ---------- | ------ |
// | 5 >> 1     | 2      |
// | 5 >> 2     | 1      |
// | 5 >> 3     | 0      |
// | 16 >> 2    | 4      |
// | 32 >> 3    | 4      |

// | Operator | Meaning     | Math |
// | -------- | ----------- | ---- |
// | `<<`     | Left shift  | × 2  |
// | `>>`     | Right shift | ÷ 2  |


// Home work Problems

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 6, b= 10;
//     // cout<<(a&b); // 2
//     // cout<<(a|b); // 14
//     // cout<<(a^b); // 12
//     // cout<<(10<<2); // 40
//     // cout<<(10>>1); //5
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "int: " << sizeof(int) << " bytes\n";
//     cout << "short int: " << sizeof(short int) << " bytes\n";
//     cout << "long int: " << sizeof(long int) << " bytes\n";
//     cout << "long long int: " << sizeof(long long int) << " bytes\n";
//     cout << "unsigned int: " << sizeof(unsigned int) << " bytes\n";
//     return 0;
// }

// | Modifier    | Meaning (Simple)                                  |
// | ----------- | ------------------------------------------------- |
// | `short`     | Memory kam use karna (small range)                |
// | `long`      | Badi value store karni ho                         |
// | `long long` | Aur bhi badi value (like ₹ balance, population)   |
// | `signed`    | + and - dono allow karta hai                      |
// | `unsigned`  | Sirf +ve values store karne ke liye (range zyada) |
