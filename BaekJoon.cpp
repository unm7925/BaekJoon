#include <iostream>

using namespace std;

long long Math(long long a, long long b)
{
    long long total = ((a * (a + 1)) / 2) - ((b * (b + 1)) / 2) + b;

    return total;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << Math(a, b);
    }
    else
    {
        cout << Math(b, a);
    }

    return 0;
}