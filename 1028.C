/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliverira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 28/05/2026
Objetivo    : Descobrir o mdc.
Aprendizado : Uso da função da função recursiva para achar o mdc.
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int x, int y){
    if(y == 0){
        return x;
    }else{
        return mdc(y, x % y);
    }
}

int main(){
    int N, x, y;

    scanf("%d", &N);

    while(N--){
        scanf("%d %d", &x, &y);
        int n = mdc(x, y);

        printf("%d\n", n);
    }
    
    return 0;
}
