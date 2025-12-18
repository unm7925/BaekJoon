#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string isnb;

    cin >> isnb;

    int total = 0;
    int mult;
    int last;

    int length = isnb.size();

    for (int i = 0; i < length; i++)
    {
        if (isnb[i] == '*')
        {
            if ((i + 1) % 2 == 0)
            {
                mult = 3;
            }
            else
            {
                mult = 1;
            }
        }
        else if (i == (length - 1))
        {
            last = isnb[i] - 48;
        }
        else
        {

            int currentN = isnb[i] - 48;

            if ((i + 1) % 2 == 0)
            {
                currentN *= 3;
            }
            total += currentN;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if ((total + last + i * mult) % 10 == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}