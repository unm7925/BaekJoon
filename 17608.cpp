#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    int top;
    int score = 0;
    int size;
    cin >> t;

    stack<int> stack1;

    while (t--)
    {
        int stack_int;

        cin >> stack_int;

        stack1.push(stack_int);
    }

    top = stack1.top();
    size = stack1.size();

    for (int i = 0; i < size; i++)
    {
        if (top < stack1.top())
        {
            top = stack1.top();
            score++;
        }
        stack1.pop();
    }

    cout << score + 1;

    return 0;
}