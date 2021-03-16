#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[]{5, 7, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}