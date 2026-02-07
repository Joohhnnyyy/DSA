#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  for (auto &i : arr)
  {
    cin >> i;
  }
  cout << "Enter target element: ";
  int target;
  cin >> target;
  int result = linearSearch(arr, n, target);
  if (result != -1)
  {
    cout << "Element found at index: " << result << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  return 0;
}