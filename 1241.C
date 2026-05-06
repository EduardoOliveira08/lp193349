/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/1241
Exercício   : 1241
Data        : 06/05/2026
Objetivo    : Comparação de duas final, se a segunda é igual ao final da primeira.
Aprendizado : Percorrimento de uma string, para a comparação de posições as quais são pedidas.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#define T 1000

int main(){
    int N, tamA, tamB, pos_inicial;
    char A[T], B[T];

    scanf("%d", &N);

    while(N--){
        scanf("%s %s", A, B);

        tamA = strlen(A);
        tamB = strlen(B);

        int encaixa = 1;

        if (tamB > tamA){
            printf("nao encaixa\n");
        }else {
            pos_inicial = tamA - tamB;

            for(int i = 0; i < tamB; i++){
                if (A[pos_inicial + i] != B[i]){
                    encaixa = 0;
                    break;
                }
            }
            if (encaixa == 1){
                printf("encaixa\n");
            } else{
                printf("nao encaixa\n");
            }
        }

    }
}
