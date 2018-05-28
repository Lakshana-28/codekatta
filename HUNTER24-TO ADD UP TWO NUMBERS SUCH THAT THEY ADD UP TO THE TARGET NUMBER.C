#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,j,n,k,cnt=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cnt++;
            }
        }
    }
    if(cnt>0)
    {
        printf("YES");
    }
}
