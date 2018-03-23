#include<stdio.h>
#include<math.h>
void main() 
  {
    int n,val,arsize,i,k=0,p;
    float v;
    printf("Do you want to enter a decimal(1) or a binary(2) number?\n");
    scanf("%d" , &val);
    switch(val)
     {
        case 1:{ printf("Enter the decimal number\n");
                 scanf("%d",&n);
                 k=log2(n);	      
                 arsize=k+1;
                 int arr[arsize];
                 for(i=0;i<arsize;i++)
                   {
                      if(n%2==1)
                        arr[i]=1;
                      else
                        arr[i]=0;
                      n=n/2;
                   }     
                 for(i=arsize-1;i>=0;i--)
                   {
                      printf("%d",arr[i]);
                   }
                  printf("\n");
               }
               break;
        case 2:{  printf("Enter the binary number\n");
                  scanf("%d",&n);
                  i=0;
                  while(n!=0)
                     {
                       p=n%10;
                       k=k+p*pow(2,i);
                       n=n/10;
                       i++;                   
                     }
                  printf("The value in decimal is %d\n",k);
               }
               break;
        default: printf("\nEnter a valid number\n");


     }
  }
