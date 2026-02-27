#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     
        
        int maxPile = *max_element(piles.begin(), piles.end());
        for(int k = 1; k <= maxPile; k++){
            
            int hours = 0;
            
            for(int i = 0; i < piles.size(); i++){
                hours = hours + (piles[i] + k - 1) / k;  
            }
            
            if(hours <= h){
                return k; 
            }
        }
        
        return maxPile; 
    }
};
int main() {
    Solution solution;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int result = solution.minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;
    return 0;
}
   