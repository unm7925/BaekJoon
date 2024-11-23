#include <iostream>
#include <deque>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int sizeN = t;
	deque<int> deq;
	stack<int> st;

	while (t--)
	{
		int pushN;

		cin >> pushN;

		st.push(pushN);
	}
	
	
	for (int i = 1; i <= sizeN; i++)
	{
		if (st.top() == 1)
		{
			st.pop();
			deq.insert(deq.begin(), i);
		}
		else if (st.top() == 2)
		{
			st.pop();
			deq.insert(deq.begin() + 1, i);
		}
		else if (st.top() == 3)
		{
			st.pop();
			deq.push_back(i);
		}
	}
	
	for (int i = 0; i < sizeN; i++)
	{
		cout << deq[i] << " ";
	}

	return 0;
}
