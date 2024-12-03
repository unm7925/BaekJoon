#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int s;
    int count = 1;
    int clear = 0;
    int j = 0;

    cin >> n >> s;

    int *array = new int(n);

    for (int i = 0; i < n; i++)
    {
        array[i] = 1;
    }

    cout << "<";
    while (true)
    {
        if (j > n - clear)
        {
            j = n - clear - j - 1;
        }
        if (count == 3 && array[j] != 0)
        {
            clear++;
            array[j] = 0;
            cout << j + 1;
            count = 0;

            if (clear == n)
            {
                cout << ">";
                break;
            }
            else
            {
                cout << ", ";
            }
        }
        j++;
        count++;
    }

    return 0;
}