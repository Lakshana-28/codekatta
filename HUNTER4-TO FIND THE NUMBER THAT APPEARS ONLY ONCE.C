#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[100],i,j,k=0,b[100] ,n,cnt=0;
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
          a[j]='*';
          cnt++;
      }
  }
  if(cnt>0)
  {
      a[i]='*';
  }
  cnt=0;
}
for(i=0;i<n;i++)
{
    if(a[i]!='*')
    {
       b[k]=a[i];
       k++;
       cnt++;
    }
}
if(cnt>0)
    for(i=0;i<k;i++)
{
  printf("%d",b[i]);
}
else{
    printf("there is no non repeating element");
}


}
