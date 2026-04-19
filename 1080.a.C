/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Ler 100 valores interos e imprimir o maior e sua posição.
Aprendizado : A utilizar o laço for como se fosse um vetor.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int posicao = 0;
    int maior = num;

    for(int i = 1; i <= 100; i ++){
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
            posicao = i;
        }
    }
    printf("%d\n%d\n", maior, posicao);
    return 0;
}
