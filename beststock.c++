#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for(int i = 1; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    
    return maxProfit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;


    vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter the price for days " << i + 1 << ": ";
        cin >> prices[i];
    }

    cout << maxProfit(prices);

    return 0;
}