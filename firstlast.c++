#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int first = -1, last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
            high = mid - 1;
        else
            low = mid + 1;
        if (nums[mid] == target)
            first = mid;
    }
    low = 0;
    high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] <= target)
            low = mid + 1;
        else
            high = mid - 1;

        if (nums[mid] == target)
            last = mid;
    }
    return {first, last};
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter target: ";
    cin >> target;
    vector<int> result = searchRange(nums, target);
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}