#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int min;
    int max = 1;
    cin >> n >> m;
    if (n < m)
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0 && m % i == 0)
            {
                max = i;
            }
        }
    }
    else
    {
        for (int i = 2; i <= m; i++)
        {
            if (n % i == 0 && m % i == 0)
            {
                max = i;
            }
        }
    }

    cout << max << "\n";
    cout << n / max * m;

    return 0;
}