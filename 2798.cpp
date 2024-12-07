#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, total;
    int best = 0;

    cin >> t >> total;

    deque<int> card;

    for (int i = 0; i < t; i++)
    {
        int pushN;

        cin >> pushN;

        card.push_back(pushN);
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            for (int k = j + 1; k < t; k++)
            {
                int count = card[i] + card[j] + card[k];
                if (count <= total && best < count)
                {
                    best = count;
                }
            }
        }
    }

    cout << best;
    return 0;
}