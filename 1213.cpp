#include <bits/stdc++.h>

using namespace std;

// bool compare(pair<char, int> a, pair<char, int> b)
// {
//     return a.second > b.second;
// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 홀수는 1개 혹은 0개여야함
    // 짝수는 상관없음 무조건 만들 수 있음
    // 홀수 판별해서 홀수가 2개 이상일경우 false,
    // 아닐 경우 생성
    // 생성 = >
    // 갯수가 많은 것 부터 => 적은 순 그리고 홀 수 하나 => 역 순

    string centence;

    cin >> centence;

    sort(centence.begin(), centence.end());

    deque<pair<char, int>> deq;
    int index = 0;

    for (int i = 0; i < centence.size(); i++)
    {
        if (deq.empty())
        {
            deq.push_back({centence[i], 1});
        }
        else if (deq[index].first == centence[i])
        {
            deq[index].second++;
        }
        else
        {
            deq.push_back({centence[i], 1});
            index++;
        }
    }

    // sort(deq.begin(), deq.end(), compare);

    char middle = '*';
    int falseN = 0;

    for (int i = 0; i < deq.size(); i++)
    {
        if (deq[i].second % 2 != 0)
        {
            middle = deq[i].first;
            falseN++;
        }
    }

    if (falseN > 1)
    {
        cout << "I'm Sorry Hansoo";
    }
    else
    {
        for (int i = 0; i < deq.size(); i++)
        {
            for (int j = 0; j < deq[i].second / 2; j++)
            {
                cout << deq[i].first;
            }
        }

        if (middle != '*')
        {
            cout << middle;
        }

        for (int i = deq.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < deq[i].second / 2; j++)
            {
                cout << deq[i].first;
            }
        }
    }

    return 0;
}