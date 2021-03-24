#include <bits/stdc++.h>
using namespace std;

void ShellSort(int arr[], int n)
{

    for (int gap = n / 2; gap >= 1; gap /= 2)
    {
        for (int j = gap; j < n; j++)
        {
            int temp = arr[j];
            int i = j - gap;
            while (i >= 0 && arr[i] > temp)
            {
                arr[i + gap] = arr[i];
                i = i - gap;
            }
            arr[i + gap] = temp;
        }
    }
}

int main()
{
    int arr[]{11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    ShellSort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}