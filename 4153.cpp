#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;

    while (true)
    {
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            if (a * a == b * b + c * c)
            {
                cout << "right ";
            }
            else
                cout << "wrong ";
        }
        else if (b > a && b > c)
        {
            if (b * b == a * a + c * c)
            {
                cout << "right ";
            }
            else
                cout << "wrong ";
        }
        else if (c > a && c > b)
        {
            if (c * c == a * a + b * b)
            {
                cout << "right ";
            }
            else
                cout << "wrong ";
        }
        else if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
    }

    return 0;
}