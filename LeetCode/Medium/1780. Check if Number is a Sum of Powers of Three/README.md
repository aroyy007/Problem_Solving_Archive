# 1780. Check if Number is a Sum of Powers of Three

## Problem Description
Given an integer `n`, return `true` if it is possible to represent `n` as the sum of distinct powers of three. Otherwise, return `false`.

An integer `y` is a power of three if there exists an integer `x` such that `y == 3^x`.

### Example 1:
```
Input: n = 12
Output: true
Explanation: 12 = 3^1 + 3^2
```

### Example 2:
```
Input: n = 91
Output: true
Explanation: 91 = 3^0 + 3^2 + 3^4
```

### Example 3:
```
Input: n = 21
Output: false
```

### Constraints
- `1 <= n <= 10^7`

---

## Approach
The solution is based on checking if the ternary (base-3) representation of `n` contains only `0`s and `1`s. If the ternary representation contains `2`, then `n` cannot be represented as the sum of distinct powers of three.

### Steps
1. Convert `n` to its base-3 representation.
2. Check if the base-3 representation contains the digit `2`.
3. Return `false` if `2` is present, otherwise return `true`.

---

## Code
```cpp
class Solution {
public:
    bool checkPowersOfThree(int n) {
        string s = "";
        while (n > 0) {
            s += to_string(n % 3);
            n /= 3;
        }
        if (s.find('2') != string::npos) {
            return false;
        } else {
            return true;
        }
    }
};
```

---

## Complexity Analysis
- **Time Complexity:** O(log₃(n))
- **Space Complexity:** O(log₃(n))

---


