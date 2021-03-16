#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (!flag)
            return;
    }
}

int main()
{
    int arr[]{5, 7, 8, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);

    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}