#include <iostream>
using namespace std;

/**
 * FUNCTION NAME: canAlwaysWin
 * PURPOSE: the function takes in a number for starting quantities of pebbles
 *     for the take away game and determines if the player can always win
 *     given n > 0 
 * PARAMETER:
 *     int n
 * RETURN VALUE:
 *     boolean: 1 for True(Win) and 0 for False(Can't win)
 * FUNCTION SINGATURE:
 *     bool canAlwaysWin(int n)
 */ 

bool canAlwaysWin(int n) {
   if (n % 9 == 0) {
       cout << boolalpha; //converts the 0 return to "false"
       return 0;
   } 
   else {
       cout << boolalpha; //converts the 1 return to "true"
       return 1;
   }
}

int main() {
   cout << canAlwaysWin(23036) << endl;
   return 0;
}