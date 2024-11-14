#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        int count = 0;
        for (int i = 0; i < a.length(); i++)
        {
            return (int)a[i] < (int)b[i];
        }
    }
    else
    {
        return a.size() < b.size();
    }

    return a.size() < b.size();
}
int main()
{
    int t;

    cin >> t;

    vector<string> vector1;

    int case1 = t;
    int case2 = 0;
    int case3 = 0;

    while (case1--)
    {
        string centence;
        cin >> centence;

        vector1.push_back(centence);
    }

    sort(vector1.begin(), vector1.end());
    vector1.erase(unique(vector1.begin(), vector1.end()), vector1.end());
    sort(vector1.begin(), vector1.end(), compare);

    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }

    return 0;
}