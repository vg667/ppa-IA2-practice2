#include<stdio.h>
int input_side()
{
  int a;
  printf("enter number");
  scanf("%d",&a);
  return a;
}

int is_composite(int n)
{
  int count=0;
  for(int i=1;n>=i;i++)
    {
      if(n%i==0)
      {
        count+=1;
      }
    }
  if(count>2)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("%d is a composite number",n);
  }
  else
  {
    printf("%d is not a composite number",n);
  }
}
int main()
{
  int n,c;
  n=input_side();
  c=is_composite(n);
  output(n,c);
    return 0;
}