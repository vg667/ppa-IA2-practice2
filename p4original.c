#include <stdio.h>
void input(int n,int a[n])
{
int i;
printf("enter the values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void sort(int n,int a[n])
{
int i;
for(i=0;i<n;i++)
{
int x,y;
x = a[i];
if (x%(i+1) == 0)
{
y++;
}
if (y > 2)
{
a[i] = x;
}
else
{
a[i] = 0;
}
}
}
int add(int n,int a[n])
{
int i,sum;
sum = 0;
for(i=0;i<n;i++)
{
sum = sum + a[i];
}
return sum;
}
void output(int n,int a[n],int sum)
{
int i;
for(i=0;i<n-1;i++)
{
printf("%d + ",a[i]);
}
printf("%d = %d",a[n-1],sum);
}
int main()
{
int n,sum;
printf("enter the amount of values to be added\n");
scanf("%d",&n);
int a[n];
input(n,a);
sort(n,a);
sum = add(n,a);
output(n,a,sum);
return 0;
}

