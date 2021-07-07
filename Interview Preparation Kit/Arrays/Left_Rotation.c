#include<stdio.h>
int main()
{
    int i,a[100000],n,j,d,temp;
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<d;i++)
    {
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
