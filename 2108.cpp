#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;            // 홀 수
    double ave = 0.0; // 평균
    int middle;       // 그냥 t/2 하면 중앙일듯. 인덱스가 0부터니까

    deque<int> deq;

    int array_p[4001] = {0};
    int array_m[4001] = {0};
    cin >> t;

    middle = t / 2;

    for (int i = 0; i < t; i++)
    {
        int pushN;
        cin >> pushN;

        ave = ave + pushN;

        deq.push_back(pushN);
        if (pushN >= 0)
        {
            array_p[pushN]++;
        }
        else
        {
            pushN = -pushN;
            array_m[pushN]++;
        }
    }
    ave = round(ave / t);
    if (ave == -0)
    {
        ave = 0;
    }
    cout << ave << "\n"; // 평균 및 중앙값
    int compare;
    if (!deq.empty())
    {
        int compare_p = *max_element(array_p, array_p + 4001);
        int compare_m = *max_element(array_m, array_m + 4001);
        if (compare_p > compare_m)
        {
            compare = compare_p;
        }
        else
        {
            compare = compare_m;
        }
    }
    deque<int> num;

    for (int i = 0; i < t; i++)
    {
        if (deq[i] >= 0 && array_p[deq[i]] == compare)
        {
            num.push_back(deq[i]);
        }
        else if (deq[i] < 0 && array_m[-deq[i]] == compare)
        {
            num.push_back(deq[i]);
        }
    }

    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());

    if (deq.size() == 1)
    {
        cout << deq[0] << "\n";
    }
    else
    {
        sort(deq.begin(), deq.end());
        cout << deq[middle] << "\n";
    }

    if (!num.empty())
    {
        if (num.size() == 1)
        {
            cout << num[0] << "\n";
        }
        else
        {
            cout << num[1] << "\n";
        }
    }

    cout << deq.back() - deq.front(); // 범위

    return 0;
}