#include <iostream>
using namespace std;

int rowSum(int arr[4][4] ,int row){
  int sum = 0;
  for (int i = 0; i < 4; i++){
    sum += arr[row][i];
  }
  return sum;
}

int columnSum(int arr [4][4] ,int column){
  int sum = 0;
  for(int i = 0 ; i < 4 ; i++){
    sum += arr[i][column];
  }
  return sum;
}
int main(){

  int arr [4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

for(int i = 0 ; i < 4 ; i++){
  cout << " Rows sum " << i+1 << " : " << rowSum(arr , i) << endl;
  cout << " Column sum " << i+1 << " : " << columnSum(arr , i) << endl;
}
return 0;           


}