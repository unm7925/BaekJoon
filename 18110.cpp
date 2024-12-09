#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 15% 위 아래, 나머지 평균 반올림 , 의견 0 == 0

    int t;

    deque<double> deq;

    double total = 0.0;

    cin >> t;

    if (t == 0)
    {
        cout << "0";
    }
    else
    {
        for (int i = 0; i < t; i++)
        {
            double pushN;
            cin >> pushN;
            deq.push_back(pushN);
        }
        double min = floor(t * 0.15 + 0.5);

        sort(deq.begin(), deq.end());

        for (int i = min; i < t - min; i++)
        {
            total += deq[i];
        }

        cout << floor(total / (t - 2 * min) + 0.5);
    }

    return 0;
}