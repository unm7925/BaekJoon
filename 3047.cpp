#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{

    int array[3] = {0};
    string word;

    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }

    sort(array, array + 3);

    cin.clear();

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'A')
        {
            cout << array[0] << " ";
        }
        else if (word[i] == 'B')
        {
            cout << array[1] << " ";
        }
        else if (word[i] == 'C')
        {
            cout << array[2] << " ";
        }
    }

    return 0;
}