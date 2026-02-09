#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
  int rowSum = 0;
  int colSum = 0;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      rowSum += arr[i][j];
      colSum += arr[j][i];
    }
    cout << "Row " << i + 1 << " Sum: " << rowSum << endl;
    cout << "Column " << i + 1 << " Sum: " << colSum << endl;
    rowSum = colSum = 0; // Reset row sum for the next row
    cout << endl; // Add a newline for better readability

  }
  cout << "Row Sum: " << rowSum << endl;
  cout << "Column Sum: " << colSum << endl;
  return 0;
}