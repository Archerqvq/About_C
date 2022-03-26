#include<stdio.h>
int main()
{
  int n;
  int l=1;
  scanf("%d",&n);
  int i;
  double sum=0.0;
  int d=1;
  for(i=1;i<=n;i++)
  {
    sum+=1.0/d*l;
    d+=3;
    l=-l;
  }
  printf("sum = %.3lf\n",sum);
  return 0;
}