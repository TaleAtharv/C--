#include <iostream>
using namespace std;

char tolarge(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a;
    }
    else
    {
        char temp = a - 'A' + 'a';
        return temp;
    }
}

bool pali(char a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (tolarge(a[i]) != tolarge(a[n - 1]))
        {
            return 0;
        }
        else{
            i++;
            n--;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    char c[n];
    cin >> c;
    // pali(c, n);
    cout << pali(c, n);
    return 0;
}