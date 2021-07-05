#include <iostream>
#include <vector>
using namespace std;
/**
 * FUNCTION NAME: numIsDivisible
 * PURPOSE: Function to check if a number is divisible by each of its individual digits.
 *          Function returns bool true if this is the case
 *          and returns bool false if number is not divisible or divide by zero would occur.
 * PARAMETERS:
 *     int num
 * RETURN VALUE:
 *     bool true if number is divisible by its digits.
 *     bool false if number is not divisible by its digits or divide by zero occurs.
 * FUNCTION SINGATURE:
 *     bool numIsDivisible(int num)
 */ 

bool numIsDivisible(int num) 
{ 
    int temp = num; 
    while (temp > 0) { 
        int digit = temp % 10; 
        if (!(digit != 0 && num % digit == 0))
            return false; 
        temp /= 10; 
    } 
    return true; 
} 
/**
 * FUNCTION NAME: getChampions
 * PURPOSE: Output all Champion Numbers between a given numeric range.
 *          A "Champion Number" is a number that is divisible by each of its digits. 
 *          (Ex. 12 is a Champion Number because its digits are 1 and 2, and 12 % 1 == 0, and 12 % 2 == 0. 
 *          Another example, is 1, because 1 % 1 == 0.)
 *          A Champion Number cannot have any of its digits being 0, because dividing any number by 0 leads to undefined behavior.
 * PARAMETERS:
 *     int start, int end
 * RETURN VALUE:
 *     vector<int>: A list of champion numbers for a given range of numbers.
 * FUNCTION SINGATURE:
 *     vector<int> getChampions(int start, int end);
 */ 

vector<int> getChampions(int start, int end) {
   vector<int> championNum;
   for (int i = start; i <= end; i++) {
       if (numIsDivisible(i)) { 
           championNum.push_back(i);
           }
   }
   return championNum;
}

int main()
{
    // your target function will be tested as such, 
    // with a random start and end value  
    vector<int> a = getChampions(1, 22);
    
    // this is one example to print out your vector content
    // in the ascending order
    for(int i=0; i < a.size(); i++)
        cout << a.at(i) << ' ';
    cout << "\n";
    return 0;
}