//Swap the smallest number of array to first number of array...
// Find the minimum element in unsorted array & swap it with element at beginning.

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter limit : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}