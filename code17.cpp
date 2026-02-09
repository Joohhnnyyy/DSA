#include <iostream>
#include <limits.h>
using namespace std;
void swap(int arr[][4] ,int r ,int c ,int transposeArr[][4]){
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++){
      transposeArr[j][i] = arr[i][j];
    }
  }
}
void printArray(int arr[][4] , int r , int c){
  for(int i = 0 ; i < r ; i++){
    for(int j = 0 ; j < c ; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int arr[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 110, 12},
                   {13, 14, 15, 16}};

  int transposeArr[4][4];
  swap(arr , 4 , 4, transposeArr);
  cout << "The transposed array is: " << endl;
  printArray(transposeArr , 4 , 4);
    cout << endl;
    return 0;
  }
