#include <bits/stdc++.h>
using namespace std;

void quickSort(int[], int, int);
int part(int[], int, int);

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Function call
    quickSort(arr, 0, n - 1);
    // Print the sorted array
    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void quickSort(int arr[], int i, int j)
{

    if (i < j)
    {
        int partition = part(arr, i, j);
        quickSort(arr, i, partition - 1);
        quickSort(arr, partition + 1, j);
    }
}

int part(int arr[], int i, int j)
{

    int low = i;
    int high = j;

    int pivot = arr[i];

    while (low < high)
    {

        while (pivot >= arr[low] && low <= j - 1)
        {
            low++;
        }

        while (pivot < arr[high] && high >= i + 1)
        {
            high--;
        }

        if (low < high)
        {
            swap(arr[low], arr[high]);
        }

        swap(arr[i], arr[high]);
    }

    return high;
}