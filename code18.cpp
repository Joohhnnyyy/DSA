#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<vector<int>> v;
  vector<int> a{1, 2, 3, 4};
  vector<int> b{5, 6, 7, 8};
  vector<int> c{9, 10, 11, 12};
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);

  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v[i].size(); j++){
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  return 0;

}