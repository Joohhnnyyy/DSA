#include <iostream>
#include <limits.h>
using namespace std;

int maxValue(int arr[4][4])
{
  int maxValue = INT_MIN;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] > maxValue)
      {
        maxValue = arr[i][j];
      }
    }
  }
  return maxValue;
}

int minValue(int arr[4][4])
{
  int minValue = INT_MAX;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] < minValue)
      {
        minValue = arr[i][j];
      }
    }
  }
  return minValue;
}

int main()
{
  int arr[4][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 110, 12},
                  {13, 14, 15, 16}};
  cout << "The maximum value in the array is: " << maxValue(arr) << endl;
  cout << "The minimum value in the array is: " << minValue(arr) << endl;
  return 0;
}