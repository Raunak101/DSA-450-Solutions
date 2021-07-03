#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(c!=i)
            {
                swap(arr[i],arr[c]);
            }
            c++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
