#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<pair<int, int>> deq_info;
    deque<pair<string, int>> user_name_list;

    int t;

    cin >> t;

    cin.ignore();
    for (int i = 0; i < t; i++)
    {

        string user_info;
        getline(cin, user_info);

        string user_name;
        string user_age;
        istringstream user_info_set(user_info);

        user_info_set >> user_age;

        int age = stoi(user_age);

        deq_info.push_back({age, i});

        user_name_list.push_back({user_info, i});
    }

    sort(deq_info.begin(), deq_info.end());

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (deq_info[i].second == user_name_list[j].second)
            {
                cout << user_name_list[j].first << "\n";
            }
        }
    }

    return 0;
}