#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/**
 * PURPOSE: Function taking in an integer vector (vector<int> &prices) consisting of all prices, 
 *          in chronological order, for an hypothetical instrument. 
 *          Function recommends the maximum profit an investor can make by placing 
 *          AT MOST one buy and one sell order in the time slice represented by the input vector.
 * PARAMETERS:
 *     vector<int> &prices
 * RETURN VALUES:
 *     int maxProfit - the maximum profit given one buy/sell order in the time slice represented by the input vector.
 * FUNCTION SIGNATURE:
 *     int getMaxProfit(vector<int> &prices)
 */
int getMaxProfit(vector<int> &prices) {
   int maxProfit = INT_MIN;
   
   for (int i = 0; i < prices.size() - 1; i++) {
       for (int j = i + 1; j < prices.size(); j++) {
           maxProfit = max(maxProfit, prices[j] - prices[i]);
       }
   }
   return maxProfit;
}
int main() {
   // your target function will be tested as such, with random input like so
   vector<int> arr{1,2,5,1,6};
   cout << getMaxProfit(arr); // 3
   return 0;
}