#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] > x)
        return BinarySearch(arr, 0, mid - 1, x);
    return BinarySearch(arr, mid + 1, high, x);
}
int findPivot(int arr[], int low, int high)
{
    if (low > high)
        return -1;
    if (low == high)
        return low;
    int mid = low + (high - low) / 2;
    if (arr[mid] > arr[mid + 1] && mid < high)
        return mid;
    if (arr[mid - 1] > arr[mid] && mid > low)
        return mid - 1;
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
    return findPivot(arr, mid + 1, high);
}
int find(int arr[], int n, int x)
{
    int pivot = findPivot(arr, 0, n - 1);
    if (pivot == -1)
        return BinarySearch(arr, 0, n - 1, x);
    if (arr[pivot] == x)
        return pivot;
    if (arr[0] <= x)
        return BinarySearch(arr, 0, pivot - 1, x);
    return BinarySearch(arr, pivot + 1, n - 1, x);
}
int main() {
    //code
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    while (T--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        int x;
        cin >> x;
        cout << find(arr, n, x) << endl;
    }
    return 0;
}