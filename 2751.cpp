#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    deque<int> deq;
    while (t--)
    {
        int pushN;
        cin >> pushN;
        deq.push_back(pushN);
    }

    sort(deq.begin(), deq.end());

    for (int i = 0; i < deq.size(); i++)
    {
        cout << deq[i] << " ";
    }
    return 0;
}