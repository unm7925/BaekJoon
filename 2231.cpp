#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int number;

    int stand = 0;

    cin >> number;

    while (true)
    {

        int result = 0;

        stand++;

        string a = to_string(stand);

        for (int i = 0; i < a.size(); i++)
        {
            result += (a[i] - '0');
        }
        result += stand;

        if (result == number)
        {
            cout << stand;
            break;
        }
        else if (stand >= number)
        {
            cout << "0";
            break;
        }
    }

    return 0;
}