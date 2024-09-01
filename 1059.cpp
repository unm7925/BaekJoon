#include <iostream>
#include <string>

using namespace std;

int main()
{
    // A와 B는 >0, A<B
    // A <= X <= B에 만족하는 모든 정수 x는 집합 s에 속하지않는다.

    int _size;
    int n;
    int result = 0;
    int compareLow = 1000;
    int comparehigh = 1000;

    cin >> _size;

    int arr[50] = {0};

    for (int i = 0; i < _size; i++)
    {
        cin >> arr[i];
    }
    cin >> n;

    int lowN = 0;
    int highN = 0;
    if (_size != 1)
    {
        for (int i = 0; i < _size; i++)
        {
            if (arr[i] < n)
            {
                if (n - arr[i] < compareLow)
                {
                    lowN = arr[i];
                    compareLow = n - arr[i];
                }
            }
            else if (arr[i] > n)
            {
                if (arr[i] - n < comparehigh)
                {
                    highN = arr[i];
                    comparehigh = arr[i] - n;
                }
            }
            else
            {
                highN = 0;
                lowN = 0;
                break;
            }
        }
        if (highN != 0 && lowN != 0)
        {
            for (int i = lowN + 1; i <= n; i++)
            {
                for (int j = n; j < highN; j++)
                {
                    if (i != j)
                    {
                        result++;
                    }
                }
            }
            cout << result;
        }
        else if (highN == 0 && lowN != 0)
        {
            cout << "0";
        }
        else if (highN != 0 && lowN == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = n; j < highN; j++)
                {
                    if (i != j)
                    {
                        result++;
                    }
                }
            }
            cout << result;
        }
        else
        {
            cout << "0";
        }
    }
    else
    {
        if (arr[0] < n)
        {
            result = 0;
        }
        else if (arr[0] > n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = n; j < arr[0]; j++)
                {
                    if (i != j)
                    {
                        result++;
                    }
                }
            }
        }
        else
        {
            result = 0;
        }
        cout << result;
    }
    return 0;
}