#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (size_t i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

void CountSort(int arr[], int n)
{
    int max = findMax(arr, n);
    int *countArr = new int[max + 1];

    for (size_t i = 0; i < max + 1; i++)
        countArr[i] = 0;

    for (size_t i = 0; i < n; i++)
        countArr[arr[i]]++;

    int ctr = 0, i = 0;
    while (ctr < max + 1)
    {
        if (countArr[ctr] > 0)
        {
            arr[i++] = ctr;
            countArr[ctr]--;
        }
        else
            ctr++;
    }
    delete[] countArr;
}

int main()
{

    int arr[]{5, 7, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    CountSort(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}