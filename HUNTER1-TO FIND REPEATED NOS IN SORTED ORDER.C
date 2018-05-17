#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a[100],b[100],i,j,cnt=0,k=0,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               b[k]=a[j];
               k++;
               cnt++;
           }
       }
   }
   if(cnt==0)
   {
       printf("unique");
   }
   else{
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

       }
   }
      for(i=0;i<k;i++)
      {
          printf("%d\t",b[i]);
      }
   }

