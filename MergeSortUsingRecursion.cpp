#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    // lengths of two arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // making two arrays to copy that values and sort // we can use * or [] same (* pointer)
    int *first = new int[len1];
    int *second = new int[len2];

    // copy
    int mainIndexOfArray = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndexOfArray++];
    }

    mainIndexOfArray = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndexOfArray++];
    }

    //merge that two array

    //pointing two index of that array
    int index1 = 0;
    int index2 = 0;
    mainIndexOfArray = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
           arr[mainIndexOfArray++] = first[index1++];
        else
           arr[mainIndexOfArray++] = second[index2++];
    }

    //checking after first condition
    while(index1 < len1)
    {
        arr[mainIndexOfArray++] = first[index1++];
    }

    while(index2 < len2)
    {
        arr[mainIndexOfArray++] = second[index2++];
    }
}

void FunMergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // left part sorting
    FunMergeSort(arr, s, mid);

    // right part sorting
    FunMergeSort(arr, mid + 1, e);

    // merge that two sorted array
    merge(arr, s, e);
}

int main()
{
    int arr[] = {1, 8, 6, 8, 0, 1, 2, 9, 1, 6, 7, 0, 00};
    int n = sizeof(arr) / sizeof(arr[0]);

    FunMergeSort(arr, 0, n - 1);

    // printing array
    for (auto i : arr)
    {
        cout << i << " ";
    }
}