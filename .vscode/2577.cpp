#include <iostream>

using namespace std;

int main()
{
    int h;
    int m;

    cin >> h >> m;

    if (m < 45)
    {
        h--;

        m += 15;
    }
    else
    {
        m -= 45;
    }
    if (h < 0)
    {
        h = 23;
    }

    cout << h << " " << m;
}