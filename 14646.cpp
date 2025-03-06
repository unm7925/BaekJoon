#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int board_size;

    int count = 0;

    int max = 0;

    cin >> board_size;

    int *arr = new int[board_size + 1];

    for (int i = 0; i < board_size + 1; i++)
    {
        arr[i] = 0;
    }

    for (int i = 1; i <= board_size * 2; i++)
    {
        int pushN;

        cin >> pushN;

        if (arr[pushN] == 0)
        {
            arr[pushN] = 1;
            count++;
        }
        else
        {
            arr[pushN] = 0;
            count--;
        }

        if (count > max)
        {
            max = count;
        }
    }

    cout << max;

    return 0;
}