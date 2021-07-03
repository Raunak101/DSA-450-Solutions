#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

void rotate(int arr[], int n)
{
    int a=arr[n-1];
    for(int j=n-2;j>=1;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[1]=arr[0];
    arr[0]=a;
}