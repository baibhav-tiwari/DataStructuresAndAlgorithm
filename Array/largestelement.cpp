// Sorting approach -> time complexity: O(N*log(N)) -> space complexity: O(N)
#include <bits/stdc++.h>
using namespace std;
int SortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
int main()
{
    vector<int> arr = {8, 4, 2, 4, 33, 1};
    vector<int> arr1 = {22, 55, 33, 11, 01};
    cout << "largest element: " << SortArr(arr) << endl;
    cout << "largest element: " << SortArr(arr1) << endl;
    return 0;
}

// using a max variable -> Time Complexity: O(N) -> Space Complexity : O(1)

#include <bits/stdc++.h>

using namespace std;
int LargestElement(int arr[], int n)
{

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {5, 7, 9, 11, 14, 2};
    int n = 6;
    int max = LargestElement(arr, n);
    cout << "The largest element in the array is: " << max << endl;

    return 0;
}