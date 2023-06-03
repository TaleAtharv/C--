#include <bits/stdc++.h>
using namespace std;

int poweri(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    int ans = poweri(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return ans * ans * a;
    }
}

int main()
{
    int a = 2;
    int b = 5;
    long long ans = poweri(a, b);
    cout << ans;
}