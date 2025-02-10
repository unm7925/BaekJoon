#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    int answer = 0;

    cin >> t;

    for (int i = 0; i < 4; i++)
    {
        int pushN;
        cin >> pushN;

        if (pushN >= t - 1000)
        {
            answer++;
        }
    }

    cout << answer;

    return 0;
}