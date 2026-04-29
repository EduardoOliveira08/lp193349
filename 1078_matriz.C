/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 29/04/2026
Objetivo    : Realizar a impressão da tabuáda de um número lido.
Aprendizado : O aprendizado de manipulação de matrizes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int matriz[10][2], N, i;

    scanf("%d", &N);

    for(i = 0; i < 10; i++){
        matriz[i][0] = i + 1;
        matriz[i][1] = N * (i + 1);
    }

    for(i = 0; i < 10; i++){
        printf("%d x %d = %d\n", matriz[i][0], N, matriz[i][1]);
    }
}
