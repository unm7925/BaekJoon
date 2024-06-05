#include <iostream>

using namespace std;

int main()
{

    // 문자열 S를 입력받은 후에,
    // 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.
    // 즉, 첫 번째 문자를 R번 반복하고,
    // 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다.
    // S에는 QR Code "alphanumeric" 문자만 들어있다.
    // 문자열 S가 공백으로 구분되어 주어진다.
    // S의 길이는 적어도 1이며, 20글자를 넘지 않는다.

    int n;

    cin >> n;

    int count;
    string text;

    for (int i = 0; i < n; i++)
    {
        cin >> count >> text;

        int length = text.length();

        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < count; k++)
            {
                cout << text[j] << "\n";
            }
        }
    }

    return 0;
}