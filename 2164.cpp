#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    queue<int> que;

    for (int i = 1; i <= t; i++)
    {
        que.push(i);
    }

    while (true)
    {
        if (que.size() == 1)
        {
            cout << que.front();
            break;
        }
        que.pop();

        int test = que.front();

        que.pop();

        que.push(test);
    }

    return 0;
}