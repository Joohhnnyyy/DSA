#include <iostream>
using namespace std;


int main(){
  int n ; 
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  for(auto &i : arr){
    cin >> i;
  }
  int zero_count = 0;
  int one_count = 0;

  for( auto i : arr){
    if( i == 0)
      zero_count++;
    else if( i == 1)
      one_count++;
  }
  cout << "Number of 0s: " << zero_count << endl;
  cout << "Number of 1s: " << one_count << endl;
  return 0;
}