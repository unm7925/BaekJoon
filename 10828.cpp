#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int count;

    string str;

    stack<int> stack_Int;

    cin >> count;

    cin.ignore();

    while (count--)
    {
        string sentence, interger;

        getline(cin, str);

        istringstream str1(str);

        str1 >> sentence;

        if (sentence == "pop")
        {
            if (stack_Int.empty())
            {
                cout << "-1";
            }
            else
            {
                cout << stack_Int.top();
                stack_Int.pop();
            }
            cout << "\n";
        }
        else if (sentence == "empty")
        {
            cout << stack_Int.empty();
            cout << "\n";
        }
        else if (sentence == "size")
        {
            cout << stack_Int.size();
            cout << "\n";
        }
        else if (sentence == "top")
        {
            if (stack_Int.empty())
            {
                cout << "-1";
            }
            else
            {
                cout << stack_Int.top();
            }
            cout << "\n";
        }
        else if (sentence == "push")
        {
            str1 >> interger;
            stack_Int.push(stoi(interger));
        }
    }

    return 0;
}