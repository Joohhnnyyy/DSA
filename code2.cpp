#include <iostream>
using namespace std;

int maxValue(int arr[], int n)
{
  int maxVal = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > maxVal)
    {
      maxVal = arr[i];
    }
  }
  return maxVal;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Maximum value in the array is: " << maxValue(arr, n) << endl;
  return 0;
}