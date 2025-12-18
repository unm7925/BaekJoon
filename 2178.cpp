#include <bits/stdc++.h>

int arr[101][101];
int visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int n, m;

using namespace std;

queue<pair<int, int>> q;
void bfs(int y, int x)
{

    visited[y][x] = 1;

    q.push({y, x});

    while (!q.empty())
    {
        auto node = q.front();

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = node.first + dy[i];
            int nx = node.second + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;
            if (visited[ny][nx] || arr[ny][nx] == 0)
                continue;

            visited[ny][nx] = visited[node.first][node.second] + 1;

            q.push({ny, nx});
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);
    cout << visited[n - 1][m - 1];
    return 0;
}