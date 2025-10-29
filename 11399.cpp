#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count;
    int total = 0;

    cin >> count;

    int arr[1000] = {0};
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + count);

    for (int i = 0; i < count; i++)
    {
        int time = 0;
        for (int j = i; j >= 0; j--)
        {
            time += arr[j];
        }
        total += time;
    }
    cout << total;

    return 0;
}