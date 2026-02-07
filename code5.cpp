#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> v{1,2,4,2,1,3,6,5,5,6,4};
  cout << "The size of the vector is: " << v.size() << endl;
  int XORofvector = 0;
  for(int i = 0 ; i<v.size() ;i++){
    XORofvector = XORofvector ^ v[i];
  }
  cout<<"Unique element in the vector is: "<<XORofvector<<endl;
  return 0;
}
