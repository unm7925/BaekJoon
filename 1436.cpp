#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    string n;

    int number = 665;
    while (true)
    {

        number++;

        n = to_string(number);

        if (n.find("666") != string::npos)
        {
            t--;

            if (t == 0)
            {
                cout << n;

                break;
            }
        }
    }

    return 0;
}