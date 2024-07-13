#include <bits/stdc++.h>
using namespace std;

void printArray(int[], int);
void mergeSort(int[], int, int);
void merge(int[], int, int, int);

// void func(int&, int&);

int main()
{
  int arr[] = {12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  

  cout << "Given array is \n";
  printArray(arr, 5);

  mergeSort(arr, 0, 5);

  cout << "\nSorted array is \n";
  printArray(arr, 5);
  return 0;
}

void mergeSort(int arr[], int i, int j)
{

  if (i >= j)
  {
    return;
  }

  int mid = (i + j)/ 2;

  mergeSort(arr, i, mid);
  mergeSort(arr, mid + 1, j);
  merge(arr, i, mid, j);
}

void printArray(int arr[], int n)
{

  cout << "Printing Your Arrays " << endl;

  for (int i = 0; i <= n; i++)
  {
    cout << arr[i] << endl;
  }
}

void merge(int arr[], int i, int mid, int j)
{

  int left = i;
  int right = mid + 1;

  vector<int> temp;

  while (left <= mid && right <= j)
  {

    if (arr[right] >= arr[left])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= j)
  {
    temp.push_back(arr[right]);
    right++;
  }



  for(int k = i; k<=j; k++){
    
    arr[k] = temp[k-i];

  }
}