#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:\n");
  scanf("%d",&a);
  return a;
}
int ged(int a,int b)
{
  int hcf;
  for(int i=1;i<=a&&i<=b;i++)
    {
      if(a%i==0&&b%i==0)
        hcf=i;
    }
  return hcf;
}
void output(int a,int b,int hcf)
{
  printf("The H.C.F(G.C.D) of %d and %d is %d",a,b,hcf);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=ged(a,b);
  output(a,b,hcf);
  return 0;
}