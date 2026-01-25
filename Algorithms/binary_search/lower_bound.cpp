//lower bound implementation in C++14
// Finds the index of the first element not less than the target in a sorted array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    
int lowerBound(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size(); 
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1; // Move to the right half
        } 
        else {
            right = mid; // Move to the left half
        }
    }
    return left; // Position of the first element not less than target
}
int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6};
    int target = 4;
    int result = lowerBound(arr, target);       

    cout << "Lower bound index for " << target << " is " << result << endl;
    return 0;
}
// it retuens the index if the element is found
// if not found it returns the index where it can be inserted to keep the array 
//set and maps is not like logn it is n logn because of 
// s.lower_bound(val); it internally uses tree data structure
// so it takes logn time for each operation and there are n operations