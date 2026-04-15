/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 07/04/2026
Objetivo    : Diferentes formas de imprimir um número float e double.
Aprendizado : AS diferentes manipulações que uma variável pode sofrer ao ser impressa.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    float a,b;
    double c,d;
    
    scanf("%f %f %lf %lf", &a, &b, &c, &d);
    
    printf("A = %f, ", a);
    printf("B = %f\n", b);
    printf("C = %lf, ", c);
    printf("D = %lf\n", d);
    
    printf("A = %.1f, ", a);
    printf("B = %.1f\n", b);
    printf("C = %.1lf, ", c);
    printf("D = %.1lf\n", d);
    
    printf("A = %.2f, ", a);
    printf("B = %.2f\n", b);
    printf("C = %.2lf, ", c);
    printf("D = %.2lf\n", d);
    
    printf("A = %.3f, ", a);
    printf("B = %.3f\n", b);
    printf("C = %.3lf, ", c);
    printf("D = %.3lf\n", d);
    
    printf("A = %.3E, ", a);
    printf("B = %.3E\n", b);
    printf("C = %.3E, ", c);
    printf("D = %.3E\n", d);
    
    printf("A = %.0f, ", a);
    printf("B = %.0f\n", b);
    printf("C = %.0f, ", c);
    printf("D = %.0f\n", d);
}
