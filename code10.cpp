#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> v1{1,2,3,4,5,6};
  vector<int> v2{1,2,3,5,6,9,10,11,12};
  vector<int> unionArr;
  for(int i = 0 ; i < max(v1.size(), v2.size()) ; i++){
    for(int j = 0 ; j < min(v1.size() ,v2.size()) ; j++){
      if(v1[i] ==v2[j]){
        v1[i] = -1; // to avoid duplicates in the union array
        break;
      }
    }
  }
  for(int i = 0 ; i < v1.size() ; i++){
    if(v1[i] != -1)unionArr.push_back(v1[i]);
  }
  for(int i = 0 ; i < v2.size() ; i++){
    if(v2[i] != -1)unionArr.push_back(v2[i]);
  }
  for(auto i : unionArr){
    cout << i << " ";
  }
  return 0;
}