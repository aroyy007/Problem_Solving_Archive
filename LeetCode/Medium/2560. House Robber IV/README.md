# 2560: House Robber IV

**Difficulty:** Medium
**Topics:** Dynamic Programming, Binary Search, Greedy

---

## 📝 Problem Statement

You are given an integer array `nums` where the `i-th` house has `nums[i]` dollars. A robber wants to steal money but **cannot rob two adjacent houses**.

* The **capability** of the robber is the **maximum amount of money** stolen from any single house during a robbery.
* The robber must steal from **at least `k` houses**.

Your task is to **return the minimum capability** possible for the robber to achieve this.

---

### Example 1

**Input:**

```
nums = [2,3,5,9], k = 2
```

**Output:**

```
5
```

**Explanation:**
Possible ways to rob at least 2 houses:

1. Rob houses at indices `[0, 2]` → Capability = `max(2,5) = 5`
2. Rob houses at indices `[0, 3]` → Capability = `max(2,9) = 9`
3. Rob houses at indices `[1, 3]` → Capability = `max(3,9) = 9`

Minimum capability = **5**.

---

### Example 2

**Input:**

```
nums = [2,7,9,3,1], k = 2
```

**Output:**

```
2
```

**Explanation:**

* Minimum capability is achieved by robbing houses at indices `[0, 4]` → `max(2,1) = 2`.

---

### Constraints

```
1 <= nums.length <= 100,000
1 <= nums[i] <= 1,000,000,000
1 <= k <= (nums.length + 1) / 2
```

---

## 💡 Approach

This problem can be solved using **Binary Search + Greedy Check**:

1. **Binary Search** on the robber’s capability (`m`):

   * Minimum = `min(nums)`
   * Maximum = `max(nums)`
2. **Check function**:

   * Iterate through houses and greedily select non-adjacent houses with `nums[i] <= m`.
   * If we can rob at least `k` houses, then `m` is a valid capability.
3. **Find the minimum `m`** that allows robbing `k` houses.

**Time Complexity:** `O(n log(max(nums)))`
**Space Complexity:** `O(1)`

---

## ✅ Key Takeaways

* Binary search is useful for **minimizing the maximum value** under constraints.
* Greedy checking avoids exploring all combinations.

---

