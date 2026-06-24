/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : Imprimir o menor valor e sua posição de um vetor.
Aprendizado : Manipulação de vetor.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int X[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &X[i]);
    }

    int menor = X[0];
    int posicao = 0;

    for(int j = 0; j < N; j++){
        if(X[j] < menor){
            menor = X[j];
            posicao = j;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao); 

    return 0;
}
