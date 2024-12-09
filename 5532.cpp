#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int day, math_report, korean_report, math, korean;

    cin >> day >> math_report >> korean_report >> math >> korean;

    while (day--)
    {

        math_report -= math;
        korean_report -= korean;

        if (math_report <= 0 && korean_report <= 0)
        {
            break;
        }
    }

    cout << day;

    return 0;
}