#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> que;
    deque<int> vec1(50, 0);
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int pushN;

        cin >> pushN;

        que.push(pushN);
    }

    int sizeN = que.size();
    int sizeN2 = que.size();

    while (sizeN2--)
    {
        vec1[que.front()]++;
        que.pop();
    }

    int answer = 0;

    for (int i = 0; i <= sizeN; i++)
    {
        if (vec1[i] == i)
        {
            answer = i;
        }
    }

    if (answer == 0 && vec1[0] > 0)
    {
        cout << "-1";
    }
    else
        cout << answer;

    return 0;
}