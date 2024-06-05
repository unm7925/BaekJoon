#include <iostream>

using namespace std;

int main()
{

    int n = 9;
    int max = 0;
    int tryC = 0;

    int inputN;

    for (int i = 0; i < n; i++)
    {
        cin >> inputN;

        if (max < inputN)
        {
            max = inputN;
            tryC = i;
        }
    }

    cout << max << "\n"
         << tryC + 1;

    return 0;
}