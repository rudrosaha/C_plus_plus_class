#include <iostream>
using namespace std;

int main() {
  
  // Input the number of elements in the array
  int n;
  cout<<"Enter array size";
  cin>>n;
  int arr[n];

  // Input the elements of the array
  cout<<"enter elements in array";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  // Initialize max to the first element of the array
  int max = arr[0];

  // Iterate through the array to find the maximum number
  for(int i=1; i<n; i++){
    if(arr[i]>max)
      max = arr[i];
  }

  // Output the maximum number
  cout<<"your max number is: "<<max;


  return 0;
}
