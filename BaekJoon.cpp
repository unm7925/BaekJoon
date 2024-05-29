#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    string a;
    cin >> t;

    while (t--)
    {
        cin >> a;

        int length = a.length();
        cout << a[0] << a[length - 1] << "\n";
    }

    return 0;
}