#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector <int> v1{1,2,3,4,5,6};
  vector <int> v2{1,2,3,5,6,9,10,11,12};
  vector <int> unionArr;
  for(int i = 0 ; i < v2.size() ; i++){
    for(int j = 0 ; j < v1.size() ; j++){
      if(v2[i] == v1[j]){
        v1[j] = -1; // to avoid duplicates in the union array
        break;
      }
    }
    if(v2[i] != -1)unionArr.push_back(v2[i]);
  }

  for(int i = 0 ; i< unionArr.size();i++){
    cout << unionArr[i] << " ";
  }
  return 0;
}