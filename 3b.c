#include<stdio.h>
int main()
{
//Continue
 int c ;
 printf("Continue\n");
 for(c=1;c<=10;c++)
 {
     if(c==7)
     {
         continue;
     }
 printf("%d\n",c);
 }
 //Break
  int b ;
   printf("Break\n");
 for(b=1;b<=10;b++)
 {
     if(b==7)
     {
         break;

     }
 printf("%d\n",b);
 }
//GoTo
 int i=0, n;
  printf("Goto\n");
printf("enter n:\n");
scanf("%d",&n);
start:
    if (i<n)
    {
        printf("%d\n",i);
        i++;
        goto start ;
    }
 
return 0;
}
