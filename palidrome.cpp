#include <bits/stdc++.h>
using namespace std;

bool palidrome(string s, int i, int j)
{
    if (i > j)
        return true;

    if (s[i] != s[j])
        return false;
    else
    {
        return palidrome(s, i + 1, j - 1);
    }
}

int main()
{
    string pali = "aabbssssbbaa";

    int i = 0;
    int j = pali.length() - 1;
    bool palii = palidrome(pali, i, j);
    cout << palii;
}