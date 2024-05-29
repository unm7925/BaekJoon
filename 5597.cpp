#include <iostream>

using namespace std;

int main()
{
    int n;
    bool number[30] = {0};

    for (int i = 0; i < 28; i++)
    {
        cin >> n;
        number[n - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (number[i] == 0)
        {
            cout << i + 1 << "\n";
        }
    }
    return 0;
}