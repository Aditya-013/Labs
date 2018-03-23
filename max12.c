#include<stdio.h>
void main()
 { 
   int i,a[10],big=0,secBig=0;
   printf("Enter 10 numbers\n");   //Logic 1
   for(i=0;i<10;i++)
     scanf("%d",&a[i]);
   big=a[0];
   for(i=0;i<10;i++)
     {
        if(a[i]>big)
          big=a[i];
     }
   secBig=a[0];
   for(i=0;i<10;i++)
     {
        if(a[i]>secBig && a[i] != big)
           secBig=a[i];
     }
    printf("\nThe greatest value is %d and the second greatest value is %d\n",big,secBig);
    
    int temp,smallest=0,j,k;
    printf("Enter 10 numbers\n");   //Logic 2
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    
    for(i=0;i<10;i++)
      {
         smallest=a[i+1];
         for(j=i+1;j<10;j++)
           {
             if(a[j] < smallest)
                {
                   smallest=a[j];
                   k=j;
                }          
           } 
       if(a[i]>smallest)
       {
        temp=a[k];
        a[k]=a[i];
        a[i]=temp;
       }     
   //printf("\nThe smallest val is %d\n",smallest);
     }
    printf("\nThe greatest value is %d and the second greatest value is %d\n",a[9],a[8]);

   
 } 
