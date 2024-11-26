#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    long long modM = 1234567891;
    long long answer = 0;
    long long r31 = 1;
    int codeN = 96;
    string english;

    cin >> t;
    cin >> english;

    for (int i = 0; i < t; i++)
    {
        long long a = english[i];
        answer = (answer + (a - codeN) * r31) % modM;
        r31 = r31 * 31 % modM;
    }

    cout << answer;
    return 0;
}