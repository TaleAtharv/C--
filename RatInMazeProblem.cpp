#include <bits/stdc++.h>
using namespace std;

bool isPos(int x, int y, vector<vector<int>> visited, int n, vector<vector<int>> m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
        return false;
}

void Solve(vector<vector<int>> m, int x, int y, string path, vector<vector<int>> visited, vector<string> &ans, int n)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // UP
    int newx = x - 1;
    int newy = y;
    if (isPos(newx, newy, visited, n, m))
    {
        path.push_back('U');
        Solve(m, newx, newy, path, visited, ans, n);
        path.pop_back();
    }

    // DOWN
    newx = x + 1;
    newy = y;
    if (isPos(newx, newy, visited, n, m))
    {
        path.push_back('D');
        Solve(m, newx, newy, path, visited, ans, n);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if (isPos(newx, newy, visited, n, m))
    {
        path.push_back('L');
        Solve(m, newx, newy, path, visited, ans, n);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if (isPos(newx, newy, visited, n, m))
    {
        path.push_back('R');
        Solve(m, newx, newy, path, visited, ans, n);
        path.pop_back();
    }

    visited[x][y] = 0;
}

void findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    if (m[0][0] == 0)
    {
        return;
    }
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;
    string path = "";

    Solve(m, x, y, path, visited, ans, n);

    sort(ans.begin(), ans.end());

    for (auto i : ans)
    {
        cout << i << " ";
    }
}

int main()
{
    int n = 4;
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    findPath(m, n);
    return 0;
}