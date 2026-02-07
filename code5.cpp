#include <iostream>
#include <vector>
using namespace std;
int UniqueElement(vector<int> &arr){
  int XorOfAll = 0;
  for(auto i : arr){
    XorOfAll = XorOfAll ^ i;
  }
  return XorOfAll;
}

int main(){
  int n;
  cout<<"Enter the number of elements: "<<endl;
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter the elements: "<<endl;
  for(auto &i : arr)
    cin>>i;
  cout << "Unique element is : " << UniqueElement(arr) << endl;
  return 0;
}