#include <iostream>

using namespace std;

int main()
{

    int n, k;
    int totaln = 1;
    int totalk = 1;
    int count = 0;

    cin >> n >> k;
    for (int i = n; i > k; i--)
    {
        totaln *= n - count;
        totalk *= n - k - count;
        count++;
    }

    cout << totaln / totalk;

    return 0;
}