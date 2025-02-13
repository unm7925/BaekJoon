#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;

    while (cin >> n)
    {
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }

        long long mul = 1;
        int index = 1;

        while (true)
        {
            mul = (mul * 10 + 1) % n;
            index++;

            if (mul % n == 0)
            {
                break;
            }
        }

        cout << index << "\n";
    }
    return 0;
}