/* NAME: Siddiqui Mohammed Asaad Shakir
/*Roll no: 241258
/*Branch:computer engineering   Batch: B3

#include<stdio.h>
int main()
{
 float a[2][2], b[2][2], result[2][2];
 int i, j;
 // Input values for the arrays a and b
 printf("Enter elements of matrix a (2x2):\n");
 for (i = 0; i < 2; i++)
 {
 for (j = 0; j < 2; j++)
 {
 scanf("%f", &a[i][j]);
 }
 }
 printf("Enter elements of matrix b (2x2):\n");
 for (i = 0; i < 2; i++)
 {
 for (j = 0; j < 2; j++)
 {
 scanf("%f", &b[i][j]);
 }
 }
 // Adding the matrices and storing in the result array
 for (i = 0; i < 2; i++)
 {
 for (j = 0; j < 2; j++)
 {
 result[i][j] = a[i][j] + b[i][j];
 printf("%f ", result[i][j]);
 }
 printf("\n");
 }
 return 0;
}
