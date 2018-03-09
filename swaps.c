#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("The value of a = %d and b= %d\n",a,b);//Logic 1
  int c;
  c=b;
  b=a;
  a=c;
  printf("The swapped value of a = %d and b= %d\n",a,b);
  
   scanf("%d %d",&a,&b);
   printf("The value of a = %d and b= %d\n",a,b);//Logic 2
   c = a+b;
   a=c-a;
   b=c-b;
   printf("The swapped value of a = %d and b= %d\n",a,b);

   scanf("%d %d",&a,&b);
   printf("The value of a = %d and b= %d\n",a,b);//Logic 3
   c=a*b;
   a=c/a;
   b=c/b;
   printf("The swapped value of a = %d and b= %d\n",a,b);
  
   scanf("%d %d",&a,&b);
   printf("The value of a = %d and b= %d\n",a,b);//Logic 4jkjlkjl
   c=a*b;
   if(c!=0)
   {
   a=c/a;
   b=c/b;
   }
   else
   {
    c=b;
    b=a;
    a=c;   
   }
   printf("The swapped value of a = %d and b= %d\n",a,b);
}
