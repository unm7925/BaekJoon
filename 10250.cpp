#include <iostream>

using namespace std;

int main()
{
    int test;

    int maxFloor;
    int maxRoomN;
    int customer;

    cin >> test;

    while (test--)
    {
        int room = 1;
        int floor = 0;

        cin >> maxFloor >> maxRoomN >> customer;

        for (int i = 0; i < maxRoomN; i++)
        {
            floor = 1;

            for (int j = 0; j < maxFloor; j++)
            {
                customer--;
                if (customer == 0)
                    break;

                floor++;
            }

            if (customer == 0)
            {
                break;
            }

            room++;
        }

        if (room < 10)
        {
            cout << floor << "0" << room;
        }
        else
        {
            cout << floor << room;
        }
        cout << "\n";
    }

    return 0;
}