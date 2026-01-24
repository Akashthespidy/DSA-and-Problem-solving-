class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + nums[i];

        int minLen = INT_MAX;

        for (int i = 0; i < n; i++) {
            int required = target + prefix[i];
            auto it = lower_bound(prefix.begin(), prefix.end(), required);

            if (it != prefix.end()) {
                minLen = min(minLen, (int)(it - (prefix.begin() + i)));
            }
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};
