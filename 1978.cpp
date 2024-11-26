#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    int answer = 0;

    deque<int> deq;

    cin >> t;

    while (t--)
    {
        int pushN;
        cin >> pushN;
        deq.push_back(pushN);
    }

    for (int i = 0; i < deq.size(); i++)
    {
        int nS = 0;
        for (int j = deq[i]; j > 0; j--)
        {
            if (deq[i] % j == 0)
            {
                nS++;
            }
        }
        if (nS == 2)
        {
            answer++;
        }
    }

    cout << answer;
    return 0;
}