/* NAME: Siddiqui Mohammed Asaad Shakir
*Roll no: 241258
*Branch:computer engineering   Batch: B3
/* PROGRAM NO 5-B
/*program to demonstrate Factorial and Fabonacci Using Resursion */

#include <stdio.h>

int fibo(int n); 
int fact(int q); 

int main() {
    int n, q;

    
    printf("Enter the number for Fibonacci series: ");
    scanf("%d", &n);


    printf("Enter a number For factorial: ");
    scanf("%d", &q);

    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibo(i));  
    }
    printf("\n");

    printf("Factorial of %d is: %d\n", q, fact(q));

    return 0;
}

// Recursive Fibonacci function to return nth Fibonacci number
int fibo(int n) {
    if (n == 1) 
        return 0; 
    else if (n == 2) 
        return 1;  
    else 
        return fibo(n - 1) + fibo(n - 2);  
}

int fact(int q) {
    if (q == 0 || q == 1) 
        return 1;
    else 
        return q * fact(q - 1);  
}
