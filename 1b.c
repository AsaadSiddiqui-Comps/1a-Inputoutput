/* NAME: Siddiqui Mohammed Asaad Shakir
*Roll no: 241258
*Branch:computer engineering   Batch: B3
/* PROGRAM NO 1-B
/*program to demonstrate input/output function */

#include <stdio.h>

int main() {
    int a, b, c, d;

    // Arithmetic Operations
    printf("Enter values for a:\n");
    scanf("%d", &a);
    printf("Enter values for b:\n");
    scanf("%d", &b);
    printf("Addition of two numbers: %d\n", a + b);
    printf("Subtraction of two numbers: %d\n", a - b);
    printf("Multiplication of two numbers: %d\n", a * b);
    printf("Division of two numbers: %d\n", a / b);
    
    // Relational Operators
    printf("Enter values for a:\n");
    scanf("%d", &a);
    printf("Enter values for b:\n");
    scanf("%d", &b);
    printf("Result of a == b: %d\n", a == b);
    printf("Result of a > b: %d\n", a > b);
    printf("Result of a < b: %d\n", a < b);
    
    // Logical Operators AND
    printf("Enter values for a:\n");
    scanf("%d", &a);
    printf("Enter values for b:\n");
    scanf("%d", &b);
    printf("Enter values for c:\n");
    scanf("%d", &c);
    printf("Enter values for d:\n");
    scanf("%d", &d);
    printf("Result of (a > b) && (c < d): %d\n", (a > b) && (c < d));

    // Logical Operators OR
    printf("Enter values for a:\n");
    scanf("%d", &a);
    printf("Enter values for b:\n");
    scanf("%d", &b);
    printf("Enter values for c:\n");
    scanf("%d", &c);
    printf("Enter values for d:\n");
    scanf("%d", &d);
    printf("Result of (a > b) || (c < d): %d\n", (a > b) || (c < d));

    // Not Mentioned
    // Logical Operators NOT 
    printf("Enter values for a:\n");
    scanf("%d", &a);
    printf("Enter values for b:\n");
    scanf("%d", &b);
    printf("Enter values for c:\n");
    scanf("%d", &c);
    printf("Enter values for d:\n");
    scanf("%d", &d);
    printf("Result of (!(a > b) && (c < d)): %d\n", (!(a > b) && (c < d)));

    //TERNARY OPERATORS
    int age;
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
    
    //Unary Operators
    
    
    //Commas
    printf("Enter values for a:\n");
    scanf("%d", &a);
    printf("Enter values for b:\n");
    scanf("%d", &b);
    
    printf("Value of a is: %d \n", a);
    printf("Value of b is: %d \n", b);

    return 0;
}
