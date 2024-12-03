#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int t;
    unsigned int cm;

    unsigned int sum = 0;
    unsigned int answer = 0;
    unsigned int result = 0;
    unsigned int vec[10000];
    unsigned int maxi = 0;

    cin >> t >> cm;

    for (int i = 0; i < t; i++)
    {
        int pushN;

        cin >> pushN;

        vec[i] = pushN;

        maxi = max(maxi, vec[i]);
    }

    unsigned int min = 1;
    unsigned int middle = (maxi + min) / 2;

    while (min <= maxi)
    {
        answer = 0;
        for (int i = 0; i < t; i++)
        {
            answer += vec[i] / middle;
        }
        if (answer >= cm)
        {
            min = middle + 1;

            result = max(result, middle);
        }
        else if (answer < cm)
        {
            maxi = middle - 1;
        }

        middle = (maxi + min) / 2;
    }
    cout << result;

    /*
    ++ 나중에 다시 풀어보기
    */

    return 0;
}