#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<pair<int, string>> deq_info;

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int age;
        string name;

        cin >> age >> name;

        deq_info.push_back({age, name});
    }

    stable_sort(deq_info.begin(), deq_info.end(), compare);

    for (int i = 0; i < t; i++)
    {
        cout << deq_info[i].first << " " << deq_info[i].second << "\n";
    }

    return 0;
}