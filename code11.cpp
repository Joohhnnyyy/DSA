//triplet sum problem 
#include <iostream> 
#include <vector>
using namespace std;
int main(){
  vector<int> v1{10,20,30,40};
  int target = 80;
  for(int i = 0 ; i < v1.size() ; i++){
    for(int j = i+1 ; j < v1.size() ; j++){
      for(int k = j+1 ; k < v1.size() ; k++){
        if(v1[i] + v1[j] + v1[k] == target){
          cout<<v1[i]<<" "<<v1[j]<<" "<<v1[k]<<endl;
        }
      }
    }
  }
  return 0;
}