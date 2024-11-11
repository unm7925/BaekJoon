#include <iostream>

using namespace std;

int main()
{
    long long a, b, c;

    cin >> a >> b >> c;

    if ((c - a) % (a - b) == 0)
    {
        cout << (c - a) / (a - b) + 1;
    }
    else
    {
        cout << (c - a) / (a - b) + 2;
    }

    return 0;
}