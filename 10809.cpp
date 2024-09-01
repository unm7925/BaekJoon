#include <iostream>

using namespace std;

int main()
{
    string sentence;

    cin >> sentence;

    int length = sentence.length();

    for (int i = 97; i <= 122; i++)
    {
        int count = 0;
        for (int j = 0; j < length; j++)
        {

            if ((int)sentence[j] == i)
            {
                cout << j + 1;
                break;
            }
            else
                count++;

            if (count == 26)
            {
                cout << "-1";
            }
        }

        cout << " ";
    }
    return 0;
}