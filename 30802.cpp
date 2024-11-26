#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int student;

    int tCount, pCount;

    deque<int> sizeT;

    cin >> student;

    for (int i = 0; i < 6; i++)
    {
        int pushN;
        cin >> pushN;
        sizeT.push_back(pushN);
    }

    cin >> tCount >> pCount;

    int answerT = 0;

    for (int i = 0; i < sizeT.size(); i++)
    {
        if (sizeT[i] == 0)
        {
            continue;
        }
        else if (sizeT[i] % tCount == 0)
        {
            answerT += sizeT[i] / tCount;
        }
        else if (sizeT[i] / tCount == 0 && sizeT[i] != 0)
        {
            answerT++;
        }
        else
        {
            answerT += sizeT[i] / tCount + 1;
        }
    }

    cout << answerT << "\n";
    cout << student / pCount << " " << student % pCount;

    return 0;
}