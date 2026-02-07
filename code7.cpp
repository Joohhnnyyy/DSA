#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector <int> v1{1,2,3,3,3,4,5,6};
  vector <int> v2{1,2,3,5,6,9,10,11,12};
  vector <int> intersectionArr;
  for(int i = 0 ; i< max(v1.size(),v2.size());i++){
    for(int j = 0 ; j< min(v1.size(),v2.size()) ; j++){
      if(v1[i] == v2[j]){
        v2[j] = -1; // to avoid duplicates in the intersection array
        intersectionArr.push_back(v1[i]);
      }
    }
  }
  for(int i = 0 ; i< intersectionArr.size();i++){
    cout << intersectionArr[i] << " ";
  }
  return 0;
}