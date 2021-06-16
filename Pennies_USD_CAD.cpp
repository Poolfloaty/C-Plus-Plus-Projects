#include <iostream>
using namespace std;
/**
* PURPOSE: this console program breaks the total number of pennies into 
*          respective USD and CAN denominations, and print the string buffer 
*          containing the entire formatted output string to the console display
* PARAMETERS:
*     	None
* RETURN VALUES:
*     	None
*/
int main() {
    int numPennies = 0;
    cout << "Please enter all of your pennies: " << endl;
    cin >> numPennies;
   
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
   
    cout << result;   

    return 0;
}