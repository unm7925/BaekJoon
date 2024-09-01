#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sentence[101] = {};

    cin >> sentence;

    int length = strlen(sentence);

    for (int j = 97; j <= 122; j++)
    {
        int count = 0;

        for (int i = 0; i < length; i++)
        {
            count++;

            if ((int)sentence[i] == j)
            {
                cout << i;
                break;
            }

            if (count == length)
            {
                cout << "-1";
            }
        }
        if (j != 122)
            cout << " ";
    }
    return 0;
}