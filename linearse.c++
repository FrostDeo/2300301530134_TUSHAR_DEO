#include<iostream>
using namespace std;
int search(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[5] = {5,7,9,1,3};
    int k;
    cin >> k;
    cout << search(arr, 5, k);
    return 0;
}   