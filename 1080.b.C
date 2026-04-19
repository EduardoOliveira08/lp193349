/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 19/04/2026
Objetivo    : Ler 100 valores e apresentar o maior valor e a sua posição.
Aprendizado : A utilizar vetores para casos com muitos valores como esse.
-------------------------------------------------------------------------- */

#include <stdio.h>
#define Max 100
int main()
{
    int x[Max];
    for(int i = 0; i < Max; ++i){
        scanf("%d", &x[i]);
    }

    int maior = x[0];
    int posicao = 0;

    for(int t = 1; t < Max; t++){
        if (x[t] > maior){
            maior = x[t];
            posicao = t;
        } 
    }

    printf("%d\n%d\n", maior, posicao + 1);
    return 0;
}
