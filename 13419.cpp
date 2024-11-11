#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        string content;
        string first_content;
        string second_content;

        cin >> content;

        for (int i = 0; i < content.length(); i++)
        {
            if ((i + 1) % 2 != 0)
            {
                first_content += content[i];
            }
            else
            {
                second_content += content[i];
            }
        }

        if (content.length() % 2 == 0)
        {
            cout << first_content << "\n"
                 << second_content;
        }
        else
        {
            cout << first_content << second_content << "\n"
                 << second_content << first_content;
        }

        cout << "\n";
    }
    return 0;
}