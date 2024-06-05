#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    int total;
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

    cin >> a >> b >> c;
    if (a >= 100 && b >= 100 && c >= 100 &&
        a < 1000 && b < 1000 && c < 1000)
    {
        total = a * b * c;
        string numbers = to_string(total);

        for (int i = 0; i < 10; i++)
        {
            if (numbers[i] == '0')
            {
                zero++;
            }
            else if (numbers[i] == '1')
            {
                one++;
            }
            else if (numbers[i] == '2')
            {
                two++;
            }
            else if (numbers[i] == '3')
            {
                three++;
            }
            else if (numbers[i] == '4')
            {
                four++;
            }
            else if (numbers[i] == '5')
            {
                five++;
            }
            else if (numbers[i] == '6')
            {
                six++;
            }
            else if (numbers[i] == '7')
            {
                seven++;
            }
            else if (numbers[i] == '8')
            {
                eight++;
            }
            else if (numbers[i] == '9')
            {
                nine++;
            }
        }

        cout << zero << "\n";
        cout << one << "\n";
        cout << two << "\n";
        cout << three << "\n";
        cout << four << "\n";
        cout << five << "\n";
        cout << six << "\n";
        cout << seven << "\n";
        cout << eight << "\n";
        cout << nine;
        return 0;
    }
}