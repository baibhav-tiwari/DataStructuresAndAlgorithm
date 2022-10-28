// Sorting approach
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
// using a max variable