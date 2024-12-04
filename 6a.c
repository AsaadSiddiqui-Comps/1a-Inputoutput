/* NAME: Siddiqui Mohammed Asaad Shakir
/*Roll no: 241258
/*Branch:computer engineering   Batch: B3

#include <stdio.h>
void display();
int n=5;// global variable
int main()
{
 ++n; // use of global variable in main
 int n1; // local variable for function main
 for (int i = 0; i < 5; ++i) // i local variable only for loop block
 {
 printf("C programming\n");
 }
 // printf("%d", i); // Error: i is not declared at this point
 display();
 display();
 return 0;
}
void display()
{
 ++n; //use of global variable in function display
 printf("\n n = %d\n", n);
 int n2; // n2 is local variable only for function display
 static int c = 1;
 c = c+ 5;
 printf("c=%d \n ",c);
}
