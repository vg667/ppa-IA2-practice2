#include <stdio.h>

void input(float *base,float *height)
{
  printf("Enter the triangle's base and height values");
  scanf("%f %f",base,height);
}

void Find_area(float base,float height,float *area)
{
  *area = 0.5*(base*height);
}

void output(float base,float height,float area)
{
  printf("Area of triangle with base %f and height %f is %f",base,height,area);
}

int main()
{
  float base,height,area;
  input(&base,&height);
  Find_area(base,height,&area);
  output(base,height,area);
  return 0;
}