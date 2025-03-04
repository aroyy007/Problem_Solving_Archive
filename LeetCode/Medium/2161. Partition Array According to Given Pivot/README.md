# 2161. Partition Array According to Given Pivot

## Problem Description
You are given a 0-indexed integer array `nums` and an integer `pivot`. Rearrange `nums` such that:
- Elements less than `pivot` appear before elements greater than `pivot`.
- Elements equal to `pivot` are in between.
- The relative order of elements less than and greater than `pivot` is maintained.

### Example 1:
```
Input: nums = [9,12,5,10,14,3,10], pivot = 10
Output: [9,5,3,10,10,12,14]
```

### Example 2:
```
Input: nums = [-3,4,3,2], pivot = 2
Output: [-3,2,4,3]
```

### Constraints
- `1 <= nums.length <= 10^5`
- `-10^6 <= nums[i] <= 10^6`
- `pivot` is an element of `nums`

---

## Approach
The solution involves dividing elements into three categories:
- `l` for elements less than `pivot`
- `e` for elements equal to `pivot`
- `r` for elements greater than `pivot`

The final array is constructed by concatenating `l`, `e`, and `r` while maintaining their relative order.

### Code
```cpp
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l, r, e;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > pivot) {
                r.push_back(nums[i]);
            } else if (nums[i] < pivot) {
                l.push_back(nums[i]);
            } else {
                e.push_back(nums[i]);
            }
        }

        vector<int> ans;
        ans.insert(ans.end(), l.begin(), l.end());
        ans.insert(ans.end(), e.begin(), e.end());
        ans.insert(ans.end(), r.begin(), r.end());

        return ans;
    }
};
```

---

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)



