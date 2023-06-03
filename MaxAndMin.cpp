#include <bits/stdc++.h>
using namespace std;

int MaxAndMin(int arr[], int n)
{
    int max = 0;
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "max: " << max << endl;
    cout << "min: " << min;
    return 0;
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
    MaxAndMin(arr, n);
    return 0;
}