#include <iostream>

using namespace std;

int main()
{
    double totalScore = 0;
    int testNum = 0;
    double score = 0;

    cin >> testNum;
    const int max = 1000;

    if (testNum <= max)
    {
        int *arr = new int[testNum];

        for (int count = 0; count < testNum; count++)
        {
            cin >> score;
            arr[count] = score;
        }

        double maxScore = arr[0];
        for (int i = 1; i < testNum; i++)
        {
            if (arr[i] > maxScore)
            {
                maxScore = arr[i];
            }
        }

        for (int i = 0; i < testNum; i++)
        {
            totalScore += (arr[i] / maxScore * 100);
        }

        cout << totalScore / testNum;

        delete[] arr; // 배열 메모리 해제
    }

    return 0;
}