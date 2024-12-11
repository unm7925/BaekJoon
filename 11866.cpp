#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 요세푸스 수열
    // 제거되는 순번이 차례대로 출력

    int n, k;

    cin >> n >> k;

    int count = 0;
    int care = 0;
    int array[1001] = {0};

    for (int i = 1; i <= n; i++)
    {
        array[i] = i;
    }

    cout << "<";
    for (int i = 1; i <= n; i++)
    {
        if (array[i] != 0)
        {
            count++;
            if (count == k)
            {
                cout << i;
                array[i] = 0;
                count = 0;
                care++;
                if (care == n)
                {
                    break;
                }
                else
                {
                    cout << ", ";
                }
            }
        }

        if (i + 1 > n)
        {
            i = 0;
        }
    }
    cout << ">";

    return 0;
}