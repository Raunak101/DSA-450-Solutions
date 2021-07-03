#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arr[]={14,15,16,2,10,8,7,0,9,44};

    int n=sizeof(arr)/sizeof(arr[0]);
    int ma=INT16_MIN,mi=INT16_MAX,i;
    if(n%2==0)
    {
        ma=max(arr[0],arr[1]);
        mi=min(arr[0],arr[1]);
        i=2;
    }
    else
    {
        ma=arr[0];
        mi=arr[0];
        i=1;
    }
    for(;i<n-1;i+=2)
    {
        int tma=max(arr[i],arr[i+1]);
        int tmi=min(arr[i],arr[i+1]);
        ma=max(ma,tma);
        mi=min(mi,tmi);
    }

    cout<<"With Minimum Number of Comparisons: ";
    cout<<"Max : "<<ma;
    cout<<"Min : "<<mi;
    return 0;
}
