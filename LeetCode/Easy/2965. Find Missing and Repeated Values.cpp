class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mp;
        set<int> ss;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                mp[grid[i][j]]++;
                ss.insert(grid[i][j]);
            }
        }

        int repeated = -1;
        for (auto &i : mp) {
            if (i.second == 2) {
                repeated = i.first;
                break;
            }
        }

        int n = grid.size();
        n = n * n;

        int actualSum = 0;
        for (auto val : ss) {
            actualSum += val;
        }

        int expectedSum = (n * (n + 1)) / 2;
        int missing = expectedSum - actualSum;

        return {repeated, missing};
    }
};
