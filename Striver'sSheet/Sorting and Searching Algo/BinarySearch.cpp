#include <iostream>
using namespace std;
int binary(int arr[], int l, int h, int k)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == k)
            return mid;
        if (k < arr[mid])
            return binary(arr, l, mid - 1, k);
        if (k > arr[mid])
            return binary(arr, mid + 1, h, k);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << binary(arr, 0, n - 1, k);
    return 0;
}