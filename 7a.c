/* NAME: Siddiqui Mohammed Asaad Shakir
/*Roll no: 241258
/*Branch:computer engineering   Batch: B3

#include<stdio.h>
int main()
{
int x[10],n,sum=0;
float avg;
printf("Enter n\n");
scanf("%d",&n);
if (n>10)
{
printf("Error: Maximum size is 10\n");
return 1;
}
for(int i=0;i<n;i++)
{
printf("Enter element x%d: ",i);
scanf("%d",&x[i]);
sum=sum+x[i];
}
printf("Sum of elements=%d",sum);
avg=(float)sum/n;
printf("\n");
printf("Average of the elements = %.2f\n",avg);
return 0;
}
