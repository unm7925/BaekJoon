#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int T;
int grid[101][101];
int width, height;
int w, h;
int amount;

void dfs(int x, int y)
{
    grid[x][y] = 0;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= width || ny >= height)
            continue;
        if (grid[nx][ny] == 1)
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    while (T--)
    {
        int point = 0;

        cin >> width >> height >> amount;

        for (int i = 0; i < amount; i++)
        {
            cin >> w >> h;
            grid[w][h] = 1;
        }

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                if (grid[i][j] == 1)
                {
                    dfs(i, j);
                    point++;
                }
            }
        }

        cout << point << '\n';
    }

    return 0;
}