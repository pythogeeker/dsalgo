#include<stdio.h>
int digits(int n)
{
  int count=0;
  while(n)
  {
    n=n/10;
    count++;
  }
  return count;
}
int main()
{
  int n,out;
  scanf("%d",&n);
  out=digits(n);
  printf("%d",out);
  return 0;
}
