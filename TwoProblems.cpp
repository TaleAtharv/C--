// 1]Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.?
// 2]Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void TriangleWithPrimeNo(int n)
{
    int num = 2;
    // triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            while (!isprime(num))
            {
                num++;
            }
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // pyramid
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     // Print
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         while (!isprime(num))
    //         {
    //             num++;
    //         }
    //         cout << num;
    //         num++;
    //     }

    //     cout << endl;
    // }
}

int main()
{
    int n;
    cin >> n;
    TriangleWithPrimeNo(n);
    return 0;
}