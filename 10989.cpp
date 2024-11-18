#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;

    int array[10001] = {0};

    cin >> t;
    cin.ignore();

    while (t--)
    {
        int a;
        cin >> a;
        cin.ignore();
        array[a]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        if (array[i] != 0)
        {
            for (int j = 0; j < array[i]; j++)
                cout << i << " ";
        }
    }

    return 0;
}