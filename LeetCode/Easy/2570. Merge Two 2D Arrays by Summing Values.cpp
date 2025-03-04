class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int i = 0, j = 0;
        vector<vector<int>> ans; 

        while (i < nums1.size() && j < nums2.size()) {
            int i1 = nums1[i][0], j1 = nums1[i][1];
            int i2 = nums2[j][0], j2 = nums2[j][1];

            if (i1 < i2) {
                ans.push_back({i1, j1});
                i++;
            } else if (i1 > i2) { 
                ans.push_back({i2, j2});
                j++;
            } else {
                ans.push_back({i1, j1 + j2});
                i++;
                j++;
            }
        }

        while (i < nums1.size()) {
            ans.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }
        while (j < nums2.size()) {
            ans.push_back({nums2[j][0], nums2[j][1]});
            j++;
        }

        return ans;
    }
};
