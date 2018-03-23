#include<stdio.h>
int main()
 { 
   int a,b,c,d,e,f,g;
   scanf("%d %d %d",&a,&b,&c); //a,b,c   b=a, c=b, a=c 
   printf("The values of a= %d , b= %d , c= %d\n",a,b,c); //Logic 1
   d=a+b+c;
   e=a+b;
   f=b+c;
   g=a+c;
   a=d-e;
   b=d-f;
   c=d-g;
   printf("The swapped values of a= %d , b= %d , c= %d\n",a,b,c);
  
   scanf("%d %d %d",&a,&b,&c);
   printf("The values of a= %d , b= %d , c= %d\n",a,b,c); //Logic 2 
   a=a^b^c;
   b=a^b^c;
   c=a^b^c;
   a=a^b^c;
   printf("The swapped values of a= %d , b= %d , c= %d\n",a,b,c);

   scanf("%d %d %d",&a,&b,&c);
   printf("The values of a= %d , b= %d , c= %d\n",a,b,c); //Logic 3
   d=a*b*c;
   e=a*b;
   f=b*c;
   g=a*c;
   a=d/e;
   b=d/f;
   c=d/g;
   printf("The swapped values of a= %d , b= %d , c= %d\n",a,b,c);
 
   scanf("%d %d %d",&a,&b,&c);
   printf("The values of a= %d , b= %d , c= %d\n",a,b,c); //Logic 4
   d=a;
   e=b;
   a=c;
   b=d;
   c=e;
   printf("The swapped values of a= %d , b= %d , c= %d\n",a,b,c);
   

   
   
 } 
 
