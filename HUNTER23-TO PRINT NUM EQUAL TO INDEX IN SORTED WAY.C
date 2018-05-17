#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],b[100],i,j,n,cnt=0,k=0,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
   for(i=0;i<n;i++)
   {
       if(i==a[i])
       {
           b[k]=a[i];
           k++;
           //printf("%d",a[i]);
           cnt++;
       }
   }
   for(i=0;i<k;i++)
   {
      for(j=i+1;j<k;j++)
      {
          if(b[i]>b[j])
          {
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
          }
      }
      printf("%d",b[i]);
   }
   if(cnt==0)
   {
       printf("-1");
   }

}
