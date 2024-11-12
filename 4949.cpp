#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        stack<char> stack1;

        string sentence;
        getline(cin, sentence);

        if (sentence[0] == '.')
        {
            break;
        }

        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] == '(')
            {
                stack1.push(sentence[i]);
            }
            else if (sentence[i] == '[')
            {
                stack1.push(sentence[i]);
            }
            else if (sentence[i] == ')' && !stack1.empty() && stack1.top() == '(')
            {
                stack1.pop();
            }
            else if (sentence[i] == ']' && !stack1.empty() && stack1.top() == '[')
            {
                stack1.pop();
            }
            else if (sentence[i] == ')' && !stack1.empty() && stack1.top() != '(')
            {

                stack1.push(sentence[i]);
                break;
            }
            else if (sentence[i] == ']' && !stack1.empty() && stack1.top() != '[')
            {

                stack1.push(sentence[i]);
                break;
            }
            else if (sentence[i] == ')' && stack1.empty())
            {

                stack1.push(sentence[i]);
                break;
            }
            else if (sentence[i] == ']' && stack1.empty())
            {

                stack1.push(sentence[i]);
                break;
            }
            else if (sentence[i] == '.')
            {
                break;
            }
        }
        if (stack1.empty())
        {
            cout << "yes ";
        }
        else
        {
            cout << "no ";
        }
    }

    return 0;
}