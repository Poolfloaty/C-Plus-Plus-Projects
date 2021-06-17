#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/**
 * PURPOSE: Function taking in an integer vector (vector<int> &prices) consisting of all prices, 
 *          in chronological order, for an hypothetical instrument. 
 *          Function recommends the maximum profit an investor can make by placing 
 *          buy and sell orders of any number in the time slice represented by the input vector.
 * PARAMETERS:
 *     vector<int> &prices
 * RETURN VALUES:
 *     vector<int> maxProfit - the maximum profit possible in the time slice represented by the input vector.
 * FUNCTION SIGNATURE:
 *     int getMaxProfit(vector<int> &prices)
 */
int getMaxProfit(vector<int> &prices) {
   int transactions = prices.size();

   vector<vector<int>> maxProfit(transactions + 1, vector<int>(prices.size(), 0));
   for(int i = 1; i < transactions + 1; i++) {
       int profit = INT_MIN;
       for (int j = 1; j < prices.size(); j++) {
           profit = max(profit, maxProfit[i - 1][j - 1] - prices[j - 1]);
           maxProfit[i][j] = max(maxProfit[i][j - 1], profit + prices[j]);
       }
   }
   return maxProfit[transactions][prices.size() - 1];
}
int main() {
   // Function testing
   vector<int> arr{3,8,1,2,14,1,3,67,1};
   cout << getMaxProfit(arr); // 6
   return 0;
}