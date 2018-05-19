#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],b[100],i,n,m,j,cnt=0;
   scanf("%d",&n);
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=0;j<m;j++)
   {
       scanf("%d",&b[j]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(a[i]==b[j])
           {
               cnt++;

           }

     }
     if(cnt>=1)

           {
               printf("yes");
               break;
           }

   }

}
