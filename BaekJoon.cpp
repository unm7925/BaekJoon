#include <iostream>

using namespace std;

int main()
{
    int a;

    int total = 0;

    cin >> a;

    char *b = new char[a];

    cin >> b;

    for (int i = 0; i < a; i++)
    {
        total += (b[i] - '0');
    }

    cout << total;

    return 0;
}