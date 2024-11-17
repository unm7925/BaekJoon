#include <iostream>

using namespace std;

int main()
{
    int number;
    int result;
    int care = 0;

    cin >> number;

    result = number / 5;

    for (int i = result; i >= 0; i--)
    {
        if ((number - 5 * i) % 3 == 0)
        {
            care++;
            result = (number - (5 * i)) / 3 + i;
            break;
        }
    }
    if (care == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << result;
    }

    return 0;
}