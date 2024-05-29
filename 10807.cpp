#include <iostream>

using namespace std;

int main()
{
    int length;
    int findInt;
    int findCount = 0;

    cin >> length;

    int arr[100] = {0};

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cin >> findInt;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == findInt)
        {
            findCount++;
        }
    }

    cout << findCount;

    return 0;
}