/* NAME: Siddiqui Mohammed Asaad Shakir
*Roll no: 241258
*Branch:computer engineering   Batch: B3
/* PROGRAM NO 5-A
/*program to demonstrate Factorial and Fabonacci Using Funtion */
#include <stdio.h>
int fact(int f);
void fibo(int n);
int main(){
int f;

printf("Enter F \n");
scanf("%d",&f);

fact(f);

//fabonnacci using Funtion
int n;
printf("Enter N: \n");
scanf("%d", &n);
fibo(n);

return 0;
}

//function of Factorial
int fact(int f)
{

    int fact = 1;
    for (
         int i=1; i<=f; i++
         )
    {
        fact = fact * i;
    }
    printf("%d \n", fact);
}

//function of Fabonnacci
void fibo (int n)
{
    int a=0, b=1, nextterm;
    printf("%d \n", a);
    printf("%d \n", b);

    for
    (int q=1; q<=n; q++)
    {
        nextterm = a + b;
        a=b;
        b = nextterm;
        printf("%d \n", nextterm);
    }
}
