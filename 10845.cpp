#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    /*
        push X: 정수 X를 큐에 넣는 연산이다.
        pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        size: 큐에 들어있는 정수의 개수를 출력한다.
        empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
        front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    */

    queue<int> que;
    int t;
    string str;

    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence, interger;
        getline(cin, str);

        istringstream str1(str);
        str1 >> sentence;

        if (sentence == "size")
        {
            cout << que.size() << " ";
        }
        else if (sentence == "empty")
        {
            cout << que.empty() << " ";
        }
        else if (sentence == "front")
        {
            if (!que.empty())
                cout << que.front() << " ";
            else
            {
                cout << "-1 ";
            }
        }
        else if (sentence == "back")
        {
            if (!que.empty())
                cout << que.back() << " ";
            else
            {
                cout << "-1 ";
            }
        }
        else if (sentence == "pop")
        {
            if (!que.empty())
            {
                cout << que.front() << " ";
                que.pop();
            }
            else
            {
                cout << "-1 ";
            }
        }
        else if (sentence == "push")
        {
            str1 >> interger;
            que.push(stoi(interger));
        }
    }

    return 0;
}