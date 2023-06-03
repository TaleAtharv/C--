#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;
    //int count = 1;

    while(i<=n)
    {
        int j = 1;
        
        while(j<=i)
        {
            char k = 'A' + n + j - (i+1);
            cout<<k<<" ";
             //count++;
             //(i-1)*n+j
            j++;
        }
        cout<<endl;
        i++;
    }

    

    // for(int i = 1; i <= n; i++)
    // {
    //     int j = 1;
    //      char k = 'A' + n - j;
    //     for(j; j <= n; j++)
    //     {
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }
}