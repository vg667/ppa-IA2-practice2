#include<stdio.h>
int input_side()
{
  int a;
  printf("enter side");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b & b!=c & c!=a)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("Triangle with sides %d,%d and %d,%d is scalene",a,b,c,isscalene);
  }
  else
  {
    printf("it isnt scalene");
  }
}
int main()
{
  int a,b,c,s;
  a=input_side();
  b=input_side();
  c=input_side();
  s=check_scalene(a,b,c);
  output(a,b,c,s);
}