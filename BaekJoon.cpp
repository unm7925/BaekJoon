#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
    // 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다.
    // 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다.
    // 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
    // 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

    int n;

    cin >> n;

    long long *number = new long long(n);

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    sort(number, number + n);

    cout << number[0] << " " << number[n - 1];
    return 0;
}