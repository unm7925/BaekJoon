#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<long long, long long> freq;

    deque<int> number;

    int t;

    cin >> t;

    while (t--)
    {
        long long pushN;
        cin >> pushN;
        freq[pushN]++;
    }

    int num;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        long long pushN;
        cin >> pushN;
        number.push_back(pushN);
    }

    for (int i = 0; i < num; i++)
    {
        cout << freq[number[i]] << " ";
    }

    return 0;
}