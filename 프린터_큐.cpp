#include <iostream>
#include <queue>

using namespace std;

int main()
{

    int t;

    cin >> t;

    cin.ignore();

    while (t--)
    {
        queue<int> que;
        int count, sequnce;
        int getN;
        cin >> count >> sequnce;

        for (int i = 0; i < count; i++)
        {
            int pushN;
            cin >> pushN;

            que.push(pushN);
        }
    }
    return 0;
}