#include <iostream>

using namespace std;
long long Math(long long a, long long b)
{
    long long number = a * a - b * b;

    return number;
}

int main()
{
    long long a, b;

    cin >> a >> b;

    cout << Math(a, b);

    return 0;
}