/* NAME: Siddiqui Mohammed Asaad Shakir
*Roll no: 241258
*Branch:computer engineering   Batch: B3
/* PROGRAM NO 1-B
/*program to demonstrate nested control structure */
#include <stdio.h>
int main(){
int num, day;
//if else loop nested (number is positive and number is even)
printf("Enter Your Number \n");
scanf("%d", &num);
if(num>=0)
{
    printf("you number is positive \n");
  if(num%2==0)
    printf("Your Number Is Even \n");
   else
     printf("Your Number Is odd \n");
}
else
    printf("Number is Negative \n");
//Switch (char "day" monday)
printf("Enter day (1-7) for days of the week \n");
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Mon\n");
            break;
        case 2:
            printf("Tue\n");
            break;
        case 3:
            printf("Wed\n");
            break;
        case 4:
            printf("Thu\n");
            break;
        case 5:
            printf("Fri\n");
            break;
        case 6:
            printf("Sat\n");
            break;
        case 7:
            printf("Sun\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }
//using Nested (for loop for different pattern)

return(0);
} 
