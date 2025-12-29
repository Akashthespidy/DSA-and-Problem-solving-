#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {

            cin >> a[i];
        }

        // Example processing: Calculate the sum of the array
        long long sum = 0;
        for (int num : a) {
            sum += num;
        }

        cout << sum << "\n";
    }

    return 0;
}