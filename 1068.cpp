#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> node[50];
int del;
int highNode;

int dfs(int current)
{
    if (current == del)
        return 0;

    int leafNode = 0;
    int amount = 0;

    for (int i = 0; i < node[current].size(); i++)
    {
        if (node[current][i] != del)
        {
            amount++;
            leafNode += dfs(node[current][i]);
        }
    }
    if (amount == 0)
    {
        return 1;
    }
    return leafNode;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nodepar;
        cin >> nodepar;
        if (nodepar == -1)
            highNode = i;
        else
            node[nodepar].push_back(i);
    }
    cin >> del;

    cout << dfs(highNode);

    return 0;
}