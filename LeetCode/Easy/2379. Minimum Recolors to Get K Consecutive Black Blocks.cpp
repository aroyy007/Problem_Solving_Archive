class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int whiteCount = 0, minWhite = INT_MAX;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                whiteCount++;
            }
        }
        minWhite = whiteCount;

        for (int i = k; i < n; i++) {
            if (blocks[i] == 'W') whiteCount++;
            if (blocks[i - k] == 'W') whiteCount--;

            minWhite = min(minWhite, whiteCount);
        }

        return minWhite;
    }
};
