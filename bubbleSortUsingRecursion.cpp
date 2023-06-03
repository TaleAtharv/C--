#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[],int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    for(int i = 0; i < n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

int main()
{
    int arr[] = {5,2,7,9,1,3,1,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);

    for(auto i : arr)
    {
        cout << i << " ";
    }
}