#include <bits/stdc++.h>
using namespace std;

int KthMaxandMin(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Kth Max: " << arr[n - k] << endl;
    cout << "Kth Min: " << arr[k - 1];

    return 0;
}

int main()
{
    int arr[] = {2, 1, 5, 8, 7};
    KthMaxandMin(arr, 5, 2);
    return 0;
}