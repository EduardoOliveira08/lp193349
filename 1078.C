/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Imprimir tabua.
Aprendizado : Multiplicar um vetor.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int tabuada[10], N, i;

    scanf("%d", &N);


    for(i = 0; i < 10; i++) {
        tabuada[i] = N * (i + 1);
    }

    for(i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", i + 1, N, tabuada[i]);
    }

    return 0;
}
