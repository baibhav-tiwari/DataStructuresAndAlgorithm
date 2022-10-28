// brute force  -> time complexity :O(NlogN)
#include <bits/stdc++.h>
using namespace std;
void getelement(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;
    sort(arr, arr + n);
    int small = arr[1];
    int large = arr[n - 2];
    cout << "second smallest: " << small << endl;
    cout << "second largest: " << large << endl;
}
int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getelement(arr, n);
    return 0;
}

// using Traversal  -> time complexity: O(N)
#include <bits/stdc++.h>
using namespace std;
void getelement(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }
    cout << "second smallest: " << second_small << endl;
    cout << "second largest: " << second_large << endl;
}
int main()
{
    int arr[] = {1, 24, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getelement(arr, n);
    return 0;
}