#include <bits/stdc++.h>

using namespace std;

int dot;
int line;
int start;
int node[1001][1001] = {0};
int visited[1001] = {0};

void dfs(int current)
{
    visited[current] = 1;
    cout << current << " ";
    for (int i = 1; i <= dot; i++)
    {
        if (node[current][i] == 1 && visited[i] != 1)
        {
            dfs(i);
        }
    }
}

void bfs(int current)
{
    visited[current] = 1;

    queue<int> q;
    q.push(current);
    while (!q.empty())
    {
        current = q.front();
        q.pop();
        cout << current << " ";

        for (int i = 1; i <= dot; i++)
        {
            if (node[current][i] == 1 && visited[i] != 1)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> dot >> line >> start;

    for (int i = 0; i < line; i++)
    {
        int x, y;
        cin >> x >> y;
        node[x][y] = 1;
        node[y][x] = 1;
    }

    dfs(start);
    fill(visited, visited + 1001, 0);
    cout << "\n";
    bfs(start);
    return 0;
}