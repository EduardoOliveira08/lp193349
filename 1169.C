/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliverira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : Calcular o peso do total de grãos no tabuleiro.
Aprendizado : Uso da função da função recursiva com números longos.
Pergunta de segunda ordem: Lógicamente, o número de grão na casas multiplicado por 2 menos 1
como seria o total de grãos?
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long tabuleiro(int casas){
    if (casas == 1){
        return 1;
    }

    return tabuleiro(casas - 1) * 2;
}

int main(){
    int N, casas, i;

    scanf("%d", &N);

    while(N--){
        scanf("%d", &casas);
        printf("%llu kg", (2 * tabuleiro(casas)- 1)/12000);
    }

    return 0;
}
