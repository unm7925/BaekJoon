#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    while (true)
    {
        string number;
        string rnumber;

        cin >> number;
        rnumber = number;
        reverse(rnumber.begin(), rnumber.end());

        if (number == "0")
        {
            break;
        }

        if (rnumber == number)
        {
            cout << "yes ";
        }
        else
        {
            cout << "no ";
        }
    }

    return 0;
}