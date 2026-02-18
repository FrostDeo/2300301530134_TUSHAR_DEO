#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return 0;

        for(int i = 0; i < n; i++) {
            if(i == 0 && nums[i] > nums[i+1])
                return i;

            else if(i == n-1 && nums[i] > nums[i-1])
                return i;

            else if(i > 0 && i < n-1 &&
                    nums[i] > nums[i-1] &&
                    nums[i] > nums[i+1])
                return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 1}; 

    int peakIndex = sol.findPeakElement(nums);

    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak element: " << nums[peakIndex] << endl;

    return 0;
}
