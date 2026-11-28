#include <bits/stdc++.h>

using namespace std;

int n;
int m = 0;
string grid[50];
bool visited[50];

void dfs(int cur)
{
    visited[cur] = true;
    for (int i = 0; i < n; i++)
    {
        if (grid[cur][i] == 'Y' && visited[i] == false)
        {
            dfs(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int hasY = 0;
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'Y')
            {
                hasY++;
                m++;
            }
        }
        if (hasY == 0)
        {
            cout << -1;
            return 0;
        }
    }

    if (m / 2 < n - 1)
    {
        cout << -1;
        return 0;
    }

    int group = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            group++;
        }
    }
    cout << group - 1;
    return 0;
}