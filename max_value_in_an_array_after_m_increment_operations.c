#include<stdio.h>
void main()
{
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[m],b[m],k[m];
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
        scanf("%d",&k[i]);
    int arr[n+1];
    int lb,ub;
    for(i=0;i<=n;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<m;i++)
    {
        lb=a[i];
        ub=b[i];
        arr[lb]=arr[lb]+k[i];
        arr[ub+1]=arr[ub+1]-k[i];
    }
    int sum=0,max=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+arr[i];
        if(sum>max)
            max=sum;
    }
    printf("%d",max);
}
