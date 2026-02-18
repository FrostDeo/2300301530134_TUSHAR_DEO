#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxVal = arr[0];
        for(int i= 1; i <arr.size(); i++){
            if(arr[i] > maxVal){
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 8, 7, 56, 90};
    cout << "Largest element: " << sol.largest(arr) << endl;
    return 0;
}