#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double t;

    cin >> t;

    double line = t / M_PI;

    line = sqrt(line);

    double answer = line * 2 * M_PI;

    cout << fixed << setprecision(9) << answer;

    return 0;
}