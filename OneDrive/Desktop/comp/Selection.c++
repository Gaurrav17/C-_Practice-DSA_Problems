#include <bits/stdc++.h>
using namespace std;

void selectionSort(int[], int);

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

void selectionSort(int arr[], int n)
{

    cout << "inside this function " << endl;

    int i = 0;
    int j = n - 2;

    while (i < j)
    {

        int min = INT_MAX;
        int index = 0;

        for (int k = i; k < n; k++)
        {
            if (arr[k] <= min)
            {
                min = arr[k];
                index = k;
            }
        }
        swap(arr[i], arr[index]);
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
