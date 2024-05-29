#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        int add = a[i] * a[i];
        total += add;
    }

    cout << total % 10;
    return 0;
}