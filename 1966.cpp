#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        queue<pair<int, int>> que;
        priority_queue<int> pq;

        int count, sequnce;
        int print = 1;

        cin >> count >> sequnce;

        for (int i = 0; i < count; i++)
        {
            int que_in;
            cin >> que_in;
            que.push({que_in, i});
            pq.push(que_in);
        }

        while (true)
        {
            int queF = que.front().first;
            int queS = que.front().second;
            if (queF != pq.top())
            {
                que.pop();
                que.push({queF, queS});
            }
            else
            {
                if (queS == sequnce)
                {
                    cout << print << " ";
                    break;
                }
                else
                {
                    que.pop();
                    pq.pop();
                    print++;
                }
            }
        }
    }
    return 0;
}
