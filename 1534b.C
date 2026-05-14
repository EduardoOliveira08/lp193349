/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/1534
Exercício   : 1534
Data        : 13/05/2026
Objetivo    : imprimir uma matriz com o tamanho que o usuário pedir.
Aprendizado : A impressão de uma matriz NxN que tenha o deslocamento diagonal do valores,  mas usando Ponteiros.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int N, i, j;

    while(scanf("%d", &N) != EOF){
        int matriz[N][N];

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(i + j == N - 1){
                    *(*(matriz + i) + j) = 2;
                } 
                else if(i == j){
                    *(*(matriz + i) + j) = 1;
                }
                else{
                    *(*(matriz + i) + j) = 3;
                }

                printf("%d", *(*(matriz + i) + j));
            }
            printf("\n");
        }
    }

    return 0;
}
