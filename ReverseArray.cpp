#include<bits/stdc++.h>
using namespace std;

void Reverse_Array(int arr[] , int size)
{
    int s = 0;
    int e = size - 1;
    while(s<e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Reverse_Array( arr, size);
     for(int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}