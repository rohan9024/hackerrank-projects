#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    int maxSum = -346734;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j + 2 < 6 && i + 2 < 6)
            {
                int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                if (maxSum < sum)
                    maxSum = sum;
            }
        }
    }
    cout << maxSum;

    return 0;
}
