/* NAME: Siddiqui Mohammed Asaad Shakir
*Roll no: 241258
*Branch:computer engineering   Batch: B3
/* PROGRAM NO 1-B
/*program to demonstrate Looping */
#include <stdio.h>

int main() {

    // For loop (Sum of n natural numbers)
    int b, sum = 0;
    printf("Enter a natural number: \n");
    scanf("%d", &b);

    for (int z = 1; z <= b; z++) {
        sum += z;
    }
    printf("Sum of natural number: %d\n", sum);

    // While loop (Print alphabets a to z)
    char v = 'a';
    printf("Alphabets (a to z): \n");
    while (v <= 'z') {
        printf("%c\n", v);
        v++;
    }

    // Do-while loop (Table of any number)
    int i = 1, n, table;
    printf("Enter a number (table): ");
    scanf("%d", &n);
    do {
        table = n * i;
        printf("%d\n", table);
        i++;
    } while (i <= 10);

    // For loop (Factorial of a number)
    int f, fact = 1;
    printf("Enter a number for factorial: \n");
    scanf("%d", &f);

    for (int r = 1; r <= f; r++) {
        fact = fact * r;
    }
    printf("Factorial of %d: %d\n", f, fact);

    // For loop (Fibonacci series)
    int q, a = 0, y = 1, nextTerm;
    printf("Enter the number (Fibonacci series): \n");
    scanf("%d", &q);

    printf("%d\n", a);
    printf("%d\n", y);

    for (int i = 3; i <= q; i++) { 
        nextTerm = a + y;
        a = y;
        y = nextTerm;
        printf("%d\n", nextTerm);
    }

    return 0;
}
