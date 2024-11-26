#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;

    cin >> m >> n;

    int arr[1000001] = {0};
    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}