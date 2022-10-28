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

// using Traversal  -> time complexity