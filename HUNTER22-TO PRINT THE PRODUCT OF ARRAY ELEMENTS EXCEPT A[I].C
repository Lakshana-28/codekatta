#include<stdio.h>
int main(void)
{
 long int a[222],i,j,sum=1,n;
scanf("%lu",&n);
for(i=0;i<n;i++)
{
scanf("%lu",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
sum=sum*a[j];
}
}
printf("%lu\t",sum);
sum=1;
}
}
