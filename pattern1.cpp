#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
 
   int i = 1;
   while(i <= n)
   {

    int s = i - 1;
    while(s)
    {
        cout<<" ";
        s++;
    }


    int j = 1;
    while(j <= n - i +1)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
   }
}