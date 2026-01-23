class Solution {
#define ll int
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        ll n = a.size();
        sort(a.begin(), a.end());
        vector<vector<ll>> ans;
        for (ll i = 0; i < n - 2; i++) {
            if (i > 0 && a[i] == a[i - 1])
                continue;
            ll l = i + 1, r = n - 1;
            while (l < r) {
                ll sum = a[i] + a[l] + a[r];
                if (sum == 0) {
                    ans.push_back({a[i], a[l], a[r]});
                    while (l < r && a[l] == a[l + 1])
                        l++;
                    while (l < r && a[r] == a[r - 1])
                        r--;
                    l++;
                    r--;
                } else if (sum < 0)
                    ++l;
                else
                    --r;
            }
        }
        return ans;
    }
};
// fix one element and use two pointers to find the other two elements