#include <iostream>
using namespace std;

int linearSearch(int arr[3][3] ,int target){
  for(int i = 0 ; i < 3 ; i++){
     for(int j = 0 ; j < 3 ; j++){
       if( target == arr[i][j]){
        return 1; // Target found
       }
     }
  }
  return 0; // Target not found
}

int main(){
  int arr[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
  int target = 12;

  if(linearSearch(arr , target)){
    cout << "Target found in the array." << endl;
  } else {
    cout << "Target not found in the array." << endl;
  }
  
  return 0;
}