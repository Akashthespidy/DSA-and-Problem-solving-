//upper bound implementation in C++14 
// Finds the index of the first element greater than the target in a sorted array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    
int upperBound(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1; // Move to the right half
        } 
        else {
            right = mid; // Move to the left half
        }
    }

    return left; // Position of the first element greater than target
}
int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6};
    int target = 4;
    int result = upperBound(arr, target);
    cout << "Upper bound index for " << target << " is " << result << endl;
    return 0;
}