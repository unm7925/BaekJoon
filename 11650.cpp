#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    deque<pair<int, int>> deq;

    while (t--)
    {
        int pushX, pushY;

        cin >> pushX >> pushY;

        deq.push_back({pushX, pushY});
    }

    sort(deq.begin(), deq.end());

    for (int i = 0; i < deq.size(); i++)
    {
        cout << deq[i].first << " " << deq[i].second << "\n";
    }

    return 0;
}