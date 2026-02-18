#include<iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr,5);
    cout << "Reversed array: ";
    printArray(arr, 5);

    return 0;
}

// public:    
// int reverse(int x){
//     long reverse = 0;
//     while(x!=0){
//         int digit = x%10;
//         reverse = reverse*10 + digit;
//         x=x/10; 
//     }
//     if(reverse>INT_MAX || reverse<INT_MIN) return 0;
//     return reverse;
// }
// };
