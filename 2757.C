/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : Imprimir um número de diferentes formas.
Aprendizado : A manipulação de formas de impressão para cada caso no qual foi pedido. 
-------------------------------------------------------------------------- */

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
