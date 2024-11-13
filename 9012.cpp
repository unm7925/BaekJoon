#include <iostream>
#include <stack>

using namespace std;

int main()
{

    char c;
    int t;

    cin >> t;

    while (t--)
    {
        stack<char> stack1;
        string gwalho;
        cin >> gwalho;
        for (int i = 0; i < gwalho.length(); i++)
        {
            if (gwalho[i] == '(')
            {
                stack1.push(gwalho[i]);
            }
            else if (gwalho[i] == ')' && stack1.empty() != 1)
            {
                stack1.pop();
            }
            else
            {
                stack1.push(gwalho[i]);
                break;
            }
        }
        if (stack1.empty())
        {
            cout << "YES ";
        }
        else
        {
            cout << "NO ";
        }
    }
    return 0;
}