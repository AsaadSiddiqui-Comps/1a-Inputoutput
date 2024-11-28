#include <stdio.h>

int main(){

 int x,age, marks;

//if(without else)
 printf("Enter Your Number \n");
 scanf("%d", &x);
    if (x > 5) {
        printf("x is greater than 5\n");
    }

// if else (age)
printf("enter age \n");
  scanf("%d", &age);

 if(age>=18)
     {
      printf("Eligible to Vote \n");
      printf("Eligible to Drive \n");
    }
 else {
    printf("Not Eligible to Drive \n");
    printf("Not Eligible to Vote \n");
 }

//Multiway
 printf("enter Marks \n");
  scanf("%d", &marks);
 if(marks>=90)
     {
      printf("A+ \n");
    }
 else if(marks >80 && marks <=90)
      printf("A \n");
else if(marks <=70 && marks <80)
      printf("b \n");
else
    printf("You have Entered Invalid Marks\n");



return(0);
}
