#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> st;

    int t;

    int total = 0;

    cin >> t;

    while (t--)
    {
        int pushN;
        cin >> pushN;

        if (pushN == 0 && !st.empty())
        {
            st.pop();
        }
        else
        {
            st.push(pushN);
        }
    }

    while (true)
    {
        if (st.empty())
        {
            break;
        }
        total = total + st.top();
        st.pop();
    }

    cout << total;

    return 0;
}