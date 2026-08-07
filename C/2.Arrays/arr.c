#include <stdio.h>
#define MAX 5
int main()
{
int A[MAX], i, sumanegativos = 0;
for (i = 0; i < MAX; i++){
    printf(" introduzca el número: %d ", i+1); scanf("%d",&A[i]);
}
printf("\n Lista de números: ");
for (i = 0; i < MAX; i++){
    printf("%5d", A[i]);
}
for (i = 0; i < MAX; i++){
    if (A[i]<0)
    sumanegativos += A[i];
}
printf("\nLa suma de los números negativos es %d",sumanegativos);
return 0;
}