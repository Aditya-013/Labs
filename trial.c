#include <stdio.h>
#include <math.h>

int main()
{
  int a=1,b;
  short int c=1,d;
  while(a>0)
  { 
    b=a;
    a++;
  }
  while(c>0)
  {
    d=c;
    c++;
  }
  
printf("The greatest integer = %d\n",b);
printf("The greatest short integer = %d",d);

}
