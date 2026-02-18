#include<vector>
#include<iostream>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = -1, secondlargest = -1;
        
        for (int i =0; i<arr.size(); i++){
            if(arr[i]>largest){
                secondlargest = largest;
                largest = arr[i];
                
            }
            else if (arr[i]< largest && arr[i]>secondlargest){
                secondlargest = arr[i];
            }
        }
        
        return secondlargest;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second largest element: " << sol.getSecondLargest(arr) << endl;
    return 0;
}