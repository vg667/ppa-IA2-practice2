#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter size of the array");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int m;
  printf("enter array element");
  for(int i=0;n>i;i++)
    {
      scanf("%d",&m);
      a[i]=m;
    }
}