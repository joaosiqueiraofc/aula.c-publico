#include <stdio.h>

int main(){
int A;
int B;
int C;
int D;
int difference;

scanf("%d\n", &A);
scanf("%d\n", &B);
scanf("%d\n", &C);
scanf("%d\n", &D);

difference = (A * B) - (C * D);

printf("DIFERENCA = %d\n", difference);
return 0;    
}