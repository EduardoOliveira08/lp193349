/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 16/05/2026
Objetivo    : Ler um vetor e imprimir na ordem invertida.
Aprendizado : Invesão na impressão de um vetor.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#define t 20

int main(){
    int N[t], i;

    for(i = 0; i < t; i++){
        scanf("%d", &N[i]);
    }

    int c = 0;

    for(int j = t - 1; j >= 0; j--){
        printf("N[%d] = %d\n", c, N[j]);
        c++;
    }
}
