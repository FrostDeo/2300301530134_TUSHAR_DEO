#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void findelement(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();      
        int n = matrix[0].size();   

        cout << "The target element is: " << target << endl;

        for(int i = 0; i < m; i++) {        
            for(int j = 0; j < n; j++) {    
                if(matrix[i][j] == target) {
                    cout << "Element found at position: ("  << i << ", " << j << ")" << endl;
                    cout << "Element found in the matrix." << endl;
                    return;
                }
            }
        }
        cout << "Element not found in the matrix." << endl;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> matrix = {
       {2, 4, 6, 8,},
       {10, 12, 14, 16,},
       {18, 20, 22, 24,}
    };
    int target = 12;
    solution.findelement(matrix, target);
    return 0;
}