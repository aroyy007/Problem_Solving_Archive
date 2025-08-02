class Solution {
public:
    bool check(vector<int>& nums, int m, int k) {
        int count = 0, i = 0;

        while (i < nums.size()) {
            if (nums[i] <= m) {
                i += 2;
                count++;
            } else {
                i++;
            }
        }
        return count >= k;
    }
    int minCapability(vector<int>& nums, int k) {
        int l = *min_element(nums.begin(), nums.end());
        int r = *max_element(nums.begin(), nums.end());

        int ans = r;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (check(nums, mid, k)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};