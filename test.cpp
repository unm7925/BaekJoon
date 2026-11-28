#include <bits/stdc++.h>

using namespace std;

int n, m;
string board[50];
int dp[50][50];
bool onPath[50][50];
bool infinite = false;

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int dfs(int y, int x)
{
    if (y < 0 || y >= n || x < 0 || x >= m || board[y][x] == 'H')
        return 0;

    if (onPath[y][x])
    {
        infinite = true;
        return 0;
    }

    if (dp[y][x] != -1)
    {
        return dp[y][x];
    }
    onPath[y][x] = true;
    int dir = board[y][x] - '0';
    int best = 0;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i] * dir;
        int nx = x + dx[i] * dir;

        best = max(best, dfs(ny, nx));
    }
    onPath[y][x] = false;
    dp[y][x] = best + 1;
    return dp[y][x];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    memset(dp, -1, sizeof(dp));

    int answer = dfs(0, 0);

    if (infinite == false)
    {
        cout << answer;
    }
    else
        cout << -1;

    return 0;
}