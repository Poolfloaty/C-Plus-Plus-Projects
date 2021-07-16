#include <iostream>
using namespace std;

/**
 * PURPOSE: Function simulates the effect of a circular array of size N, where N > 0,
 *          by shifting all of its elements to the RIGHT by M elements,
 *          where M is an integer >= 0.
 * PARAMETERS:
 *     int arr[], int N, int M
 * RETURN VALUES:
 *     No returned values
 * FUNCTION SINGATURE:
 *   void rightShiftElements(int arr[], int N, int M)
 */
void rightShiftElements(int arr[], int N, int M) {
    int temp = 0;
    for (int i = 0; i < M; i++) {
        temp = arr[N - 1];
        for (int j = N - 1; j >= 0; j--) {
            if (j == 0) {
                arr[j] = temp;
            }
            else {
                arr[j] = arr[j - 1];
            }
        }
    }
}
int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int size = sizeof(arr)/sizeof(arr[0]);
   rightShiftElements(arr, size, 9);
   cout << "[";
   for (int i=0; i<size; i++) {
      cout << arr[i]; cout << ((i==size-1) ? "" : ",");
   }
   cout << "]";
   // or you can write your assert() to validate - what you do here is 
   // completely up to you
   return 0;
}