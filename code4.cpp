#include <iostream>
using namespace std;

int main(){
  int arr[] = {1, 2, 3, 4, 5 , 6, 7, 8, 9};
  int left = 0 , right = sizeof(arr)/sizeof(arr[0]) - 1;
  while(left < right){
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
  cout << "Reversed array: ";
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    cout << arr[i] << " ";  
  }
  return 0;
}