#include <bits/stdc++.h>

using namespace std;

string wb[8] = {"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};

string bw[8] = {"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};

string board[50];

int cnt_BW(int x, int y)
{

    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != bw[i][j])
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int cnt_WB(int x, int y)
{

    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != wb[i][j])
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int min_value = 123;

    pair<int, int> p1;

    cin >> p1.first >> p1.second;

    for (int i = 0; i < p1.first; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i + 8 <= p1.first; i++)
    {
        for (int j = 0; j + 8 <= p1.second; j++)
        {
            int tmp;

            tmp = min(cnt_WB(i, j), cnt_BW(i, j));

            if (min_value > tmp)
            {
                min_value = tmp;
            }
        }
    }

    cout << min_value;

    return 0;
}