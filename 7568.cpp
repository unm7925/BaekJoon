#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<pair<int, int>> deq;

    int kg, cm, t;

    cin >> t;

    while (t--)
    {
        // kg, cm , t 명 수 만큼 받기
        // kg , cm 둘다 크면 순위 up
        // kg , cm 둘 중 하나만 크면 중립
        // kg, cm 둘 다 낮으면 순위 down < - 이건 사실상 의미없음
        // && 연산자로 비교하면 둘 다 업
        //

        cin >> kg >> cm;

        deq.push_back({kg, cm});
    }

    return 0;
}