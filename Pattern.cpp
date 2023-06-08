#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = n - i;
    //     while (j)
    //     {
    //         cout << " ";
    //         j--;
    //     }
    //     // cout << endl;
    //     int z = 1;
    //     while (z <= i)
    //     {
    //         cout << "*";
    //         z++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int i = 0;
    while(i <= n)
    {
        int j = n - i;
        while(j)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}