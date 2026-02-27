#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int n= matrix.size();
        int m= matrix[0].size();
        int s=0;
        int e= n*m-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int row= mid/m;
            int col= mid%m;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> matrix = {
       {2, 4, 6, 8,},
       {10, 12, 14, 16,},
       {18, 20, 22, 24,}
    };
    int target = 22;
    bool found = solution.searchMatrix(matrix, target);
    if (found) {
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
    return 0;
}
