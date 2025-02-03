#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    string searchStr;

    cin >> t;

    cin >> searchStr;

    string s_front, s_back;

    int iPos = searchStr.find('*');

    s_front = searchStr.substr(0, iPos);
    s_back = searchStr.substr(iPos + 1);

    for (int i = 0; i < t; i++)
    {
        string centence, cen_front, cen_back;

        cin >> centence;

        cen_front = centence.substr(0, iPos);

        if (centence.size() >= s_front.size() + s_back.size())
        {
            cen_back = centence.substr(centence.size() - s_back.size());
        }

        if (s_front == cen_front && s_back == cen_back)
        {
            cout << "DA" << "\n";
        }
        else
        {
            cout << "NE" << "\n";
        }
    }

    return 0;
}