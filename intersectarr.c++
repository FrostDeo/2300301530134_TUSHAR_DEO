#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int element = arr1[i];

        for(int j = 0; j < m; j++) {
            if(element == arr2[j]) {
                ans.push_back(element);
                arr2[j] = -1;   
                break;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> arr1 = {6, 2, 2, 5};
    vector<int> arr2 = {2, 2, 6, 6, 3};

    vector<int> result = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    cout << "Intersection: ";
    for(int x : result)
        cout << x << " ";

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     int i = 0, j = 0;
//     vector<int> ans;

//     while(i < n && j < m) {
//         if(arr1[i] == arr2[j]) {
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if(arr1[i] < arr2[j]) {
//             i++;
//         }
//         else {
//             j++;
//         }
//     }
//     return ans;
// }