#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    stack<int> st;
    deque<char> deq_char;
    deque<int> deq;
    for (int i = 0; i < t; i++)
    {
        int pushN;
        cin >> pushN;
        deq.push_back(pushN);
    }

    int deq_count = 0;
    int while_count = 1;
    while (true)
    {

        if (!st.empty() && st.top() == deq[deq_count])
        {
            st.pop();
            deq_char.push_back('-');
            ++deq_count;
        }
        else
        {
            st.push(while_count);
            while_count++;
            deq_char.push_back('+');
        }
        if (while_count > t + 1 || deq_count >= t)
        {
            break;
        }
    }
    if (st.empty())
    {
        for (int i = 0; i < deq_char.size(); i++)
        {
            cout << deq_char[i] << "\n";
        }
    }
    else
        cout << "NO";

    return 0;
}