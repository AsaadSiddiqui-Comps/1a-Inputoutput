/* NAME: Siddiqui Mohammed Asaad Shakir
/*Roll no: 241258
/*Branch:computer engineering   Batch: B3
/* PROGRAM NO 1-A
/*program to demonstrate Input/Output function */

#include <stdio.h>

int main(){

int roll_no;

//Enter Your String Code
char str[100000];
printf("Enter any Number from 1 to 99999 \n");
gets(str);


//Enter Your Character Here code
char ch;
printf("enter your character \n");
ch=getchar();



//Enter Your Roll no. Here code
printf("Enter your roll number \n");
scanf("%d" , & roll_no);



printf("Your String is: \n");
puts(str);
printf("you have entered: \n");
putchar (ch);
printf("Your Roll No. is %d", roll_no);

return(0);

}
