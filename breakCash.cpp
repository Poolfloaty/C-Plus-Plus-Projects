#include <iostream>
using namespace std;

/**
 * FUNCTION NAME: breakCash
 * PURPOSE: the function takes in the total of pennies from the user as input, 
 *     computes its equivalent in dollars, quarters, dimes, nickels, and 
 *     pennies, and outputs the result in string to the console
 * PARAMETER:
 *     int numPennies
 * RETURN VALUE:
 *     string: result in dollars, quarters, dimes, nickels, and pennies. This output 
 *     consists of the breakdown in both US and Canadian currency as in the previous
 *     assignment.
 * FUNCTION SINGATURE:
 *     string breakCash(int numPennies)
 */ 

string breakCash(int numPennies) {
   
    int usDollars = numPennies/100;
    double usCurrency = numPennies / 100.;
    float caCurrency = usCurrency * 1.33;
    int usCents = numPennies % 100;
    int usQuarters = usCents/25;
    usCents = usCents % 25;
    int usDimes = usCents/10;
    usCents = usCents % 10;
    int usNickels = usCents/5;
    usCents = usCents % 5;
      
    char result[200];
    sprintf(result, 
    "In US currency you have: %d dollars, %d quarters, %d dimes, %d nickels"
    " and %d pennies.\nIn Canadian currency you have: %.2f dollars.\n" ,
    usDollars, usQuarters, usDimes, usNickels, usCents, caCurrency);

    return result;
}

int main() {
    cout << breakCash(100);
    return 0;
}