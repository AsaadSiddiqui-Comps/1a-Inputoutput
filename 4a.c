#include <stdio.h>
//void Function()
void myself();
void hobbies();
//table Using function
int table(int n);
//Sum Of Two Number Using Function.
int sum(int a,int b);
int main() {

//void Function()
printf("MySelf: \n");
myself();

printf("My Hobbies: \n");
hobbies();


//table Using function
    int n;
    printf("Enter Your Number \n");
    scanf("%d", &n);
    table(n);


//Sum Of Two Number Using Function.
     int a,b;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    sum(a,b);
    printf("%d",sum(a,b));
    return 0;
}

//void Function()
void myself()
{
printf("My Name Is Asaad \n");
printf("I live In Mumbra \n");
}
void hobbies()
{
printf("Reading Books \n");
printf("To Do Something new \n");
}

//table Using function
int table(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * n);
    }
}

//Sum Of Two Number Using Function.
int sum(int a,int b)
{
    return (a+b) ;
}