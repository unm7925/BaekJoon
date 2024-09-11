#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (1 <= a && a <= 1000 && 1 <= b && b <= 1000 && 1 <= c && c <= 1000)
    {
        cout << a + b - c << "\n";
        string numberA = to_string(a);
        string numberB = to_string(b);
        string number = numberA + numberB;
        int i = 0;
        i = atoi(number.c_str());
        cout
            << i - c;
    }
    return 0;
}