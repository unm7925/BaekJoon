#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        int pushN1, pushN2;

        cin >> pushN1 >> pushN2;

        if (pushN1 == 0 && pushN2 == 0)
        {
            break;
        }

        cout << pushN1 / pushN2 << " " << pushN1 % pushN2 << " / " << pushN2 << "\n";
    }

    return 0;
}