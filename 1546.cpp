#include <iostream>

using namespace std;

int main()
{
    int count;

    cin >> count;

    int array[1000] = {0};

    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }

    int best = array[0];

    for (int i = 0; i < count; i++)
    {
        if (i + 1 <= count)
        {
            if (array[i] < array[i + 1])
            {
                best = array[i + 1];
            }
        }
    }

    float arv = 0;

    for (int i = 0; i < count; i++)
    {
        arv += (array[i] * 100.0f / best);
    }

    cout << arv / count;
    return 0;
}