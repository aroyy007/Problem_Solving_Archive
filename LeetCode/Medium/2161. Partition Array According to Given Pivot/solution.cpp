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
