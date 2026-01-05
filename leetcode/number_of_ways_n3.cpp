//hard 1411. Number of Ways to Paint N × 3 Grid
//https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        long long dpA = 6; // all different
        long long dpB = 6; // two same

        for (int i = 2; i <= n; i++) {
            long long newA = (2 * dpA + 2 * dpB) % MOD;
            long long newB = (2 * dpA + 3 * dpB) % MOD;

            dpA = newA;
            dpB = newB;
        }

        return (dpA + dpB) % MOD;
    }
};
