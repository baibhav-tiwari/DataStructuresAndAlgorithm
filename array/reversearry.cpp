#include<bits/stdc++.h>
using namespace std;
 void reverseArray(int arr[],int start,int end)
 {
    while(start < end)
    {
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
 }
 void printArray(int arr[],int size)
 {
    for(int i=0;i<size;++i)
    cout<<arr[i]<<"";
    cout<<endl;
 }
 int main()
 {
    int array[5];
    cout<<"enter 5 elements of array:"<<endl;
    for(int i=0;i<5;i++)
 }