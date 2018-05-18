#include<stdio.h>
int main(void)
{
  int a[100],rep[100],i,j,k=0,n;
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
        rep[k]=a[i];
        k++;
      }
    }
  }
  if(k>1){
  printf("%d",rep[0]);
}
else{
  printf("unique");
}
}
