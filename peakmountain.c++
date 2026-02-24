#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[mid + 1]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main() {
    Solution sol;
    vector<int> arr{};
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sol.peakIndexInMountainArray(arr) << endl; 
    return 0;
}