#include <iostream>
using namespace std;

int main()
{
    int t;
    int apartment[15][15] = {0};

    for (int i = 1; i < 15; i++)
    {
        apartment[0][i] = i;
    }

    for (int i = 1; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
        {
            if (j == 1)
            {
                apartment[i][1] = 1;
            }
            else
            {
                apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];
            }
        }
    }
    cin >> t;

    while (t--)
    {
        int floor, address;

        cin >> floor >> address;

        cout << apartment[floor][address] << " ";
    }
    return 0;
}