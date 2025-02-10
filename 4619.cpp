#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        int n, powN;
        int count = 1;

        cin >> n >> powN;

        if (n == 0 && powN == 0)
        {
            break;
        }

        while (true)
        {
            if (pow(count, powN) > n)
            {
                int n1 = pow(count, powN) - n;
                int n2 = n - pow(count - 1, powN);

                if (n1 < n2)
                {
                    cout << count;
                }
                else
                {
                    cout << count - 1;
                }
                cout << "\n";
                break;
            }
            else
                count++;
        }
    }

    return 0;
}