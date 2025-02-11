#include <bits/stdc++.h>

using namespace std;
int number, ms, ss;

long long powN(int n, long long m, int s)
{
    // 우린 모든 수를 나열해서 할 것 임 범위를 위해 =>
    // (a+b) % c = (a%c + b%c) %c 라고 함 근데 이건 무한 츠쿠요미 아니냐?
    // (a*b) % c도 a%c * b%c % c 인걸까
    // 그럼 매번 곱할때마다 나머지 연산 갈기는거랑 뭐가 다른거지 일단 해보자

    if (m == 1)
    {
        return n % s;
    }
    else if (m == 0)
    {
        return 1;
    }
    long long i = powN(n, m / 2, s) % s;
    if (m % 2 == 0)
        return i * i % s;
    return i * i % s * n % s;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> number >> ms >> ss;

    cout << powN(number, ms, ss);

    return 0;
}