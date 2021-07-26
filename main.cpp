#include <iostream>
using namespace std;

int main () {
   int arr[] = { 10, 15, 19, 2, 7 };
   int n = 5, sum = 0;

   for(int i = 0; i<n ; i++){
      sum += arr[i];
   }
   cout<<"The sum of the array is: " << sum; 
   cout<<"\n\n";

   return 0;
}
