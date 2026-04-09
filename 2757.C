#include <stdio.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    
    printf("A = %d, ", A);
    printf("B = %d, ", B);
    printf("C = %d\n", C);
    
    printf("A = %10d, ", A);
    printf("B = %10d, ", B);
    printf("C = %10d\n", C);
    
    printf("A = %010d, ", A);
    printf("B = %010d, ", B);
    printf("C = %010d\n", C);
    
    printf("A = %-10d, ", A);
    printf("B = %-10d, ", B);
    printf("C = %-10d\n", C);
    
}
