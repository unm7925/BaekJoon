#include <iostream>

using namespace std;

int main()
{
    string a;

    cin >> a;
    int length = a.length();

    for (int i = 0; i < length; i++)
    {
        if (a[i] > 95)
        {
            a[i] -= 32;
        }
        else
        {
            a[i] += 32;
        }
    }
    cout << a;
    return 0;
}