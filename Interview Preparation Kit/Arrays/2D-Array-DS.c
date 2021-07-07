#include<stdio.h>
int main()
{
    signed int a[6][6],b[4][4],i,j,largest=-64;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[i][j]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(b[i][j]>largest)
            {
                largest=b[i][j];
            }
        }
    }
    printf("%d",largest);
    return 0;
}
