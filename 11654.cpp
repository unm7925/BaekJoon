#include <iostream>

using namespace std;

int main()
{
    char standard;

    char etc;

    cout << fixed;
    cout.precision(1);

    float score = 0.0f;

    cin >> standard >> etc;

    if (standard == 'A')
    {
        score = 4.0f;
    }
    else if (standard == 'B')
    {
        score = 3.0f;
    }
    else if (standard == 'C')
    {
        score = 2.0f;
    }
    else if (standard == 'D')
    {
        score = 1.0f;
    }
    else if (standard == 'F')
    {
        score = 0.0f;
    }

    if (etc == '+')
    {
        score += 0.3f;
    }
    else if (etc == '-')
    {
        score -= 0.3f;
    }

    cout << score;

    return 0;
}