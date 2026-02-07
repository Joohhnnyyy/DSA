//extremes of the array
#include <iostream>
using namespace std;

int main(){

  int n ; 
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for ( auto &i : arr){
    cin >> i ;
  }

  int left = 0;
  int right = n-1;
      while( left < right){

      cout << arr[left] << " " << arr[right] << endl;
      left++;
      right--;
      if(left == right){
        cout << arr[left] << endl;
      }
    }

  return 0;

}
