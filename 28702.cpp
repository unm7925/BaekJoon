#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int number = 0;

    for (int i = 0; i < 3; i++)
    {
        string n;
        // Fizz
        // Buzz

        cin >> n;

        if (n != "Fizz" && n != "Buzz" && n != "FizzBuzz")
        {

            number = stoi(n);
        }
        number++;
    }

    if (number % 3 == 0 && number % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (number % 3 == 0)
    {
        cout << "Fizz";
    }
    else if (number % 5 == 0)
    {
        cout << "Buzz";
    }
    else
        cout << number;

    return 0;
}