#include <iostream>
#include <vector>
using namespace std;

void UnionArray(vector<int> arr1, vector<int> arr2){
  vector<int> unionArr;
  for(int i = 0 ; i<arr1.size(); i++){
    unionArr.push_back(arr1[i]);
  }
  for(int i = 0 ; i<arr2.size(); i++){
    if(find(unionArr.begin(), unionArr.end(), arr2[i]) == unionArr.end()){
      unionArr.push_back(arr2[i]);
    }
  }
  cout << "Union of the two arrays: ";
  for(int i = 0 ; i<unionArr.size(); i++){
    cout << unionArr[i] << " ";
  }
  cout << endl;
}

int main(){
  vector<int> arr1 = {1, 2, 3, 9, 10};
  vector<int> arr2 = {4, 5, 6};
  UnionArray(arr1, arr2);
  return 0;
}