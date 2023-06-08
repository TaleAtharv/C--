#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int s, int e)
{
    int PointElem = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= PointElem)
            count++;
    }

    // right place of Point Element
    int IndexOfPoEl = s + count;
    swap(arr[IndexOfPoEl], arr[s]);

    int i = s;
    int j = e;

    while (i < IndexOfPoEl && j > IndexOfPoEl)
    {
        while (arr[i] < PointElem)
        {
            i++;
        }
        while (arr[j] > PointElem)
        {
            j--;
        }
        if (i < IndexOfPoEl && j > IndexOfPoEl)
            swap(arr[i++], arr[j--]);
    }

    return IndexOfPoEl;
}

void QuickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // we will take one element of array at his right point of sorted array (in these element is 3 and right place is 2,so pint is 2)
    int point = Partition(arr, s, e);

    // after partition we got two sides of array //these is left side
    QuickSort(arr, s, point - 1);

    // right side
    QuickSort(arr, point + 1, e);
}

int main()
{
    int arr[] = {3, 1, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}