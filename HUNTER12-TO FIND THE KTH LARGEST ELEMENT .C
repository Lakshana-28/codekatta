#include<stdio.h>
int main(void)
{
  int a[10000],i,n,max,c;
  scanf("%d",&n);
   scanf("%d",&c);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  max=a[0];
  for(i=0;i<c;i++)
  {
    if(max<a[i])
    {
      max=a[i];
    }
  }
  printf("THE LARGEST AMONG THE GIVEN POSITION %d",max);
}
