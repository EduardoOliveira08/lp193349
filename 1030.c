/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : Saber quem é o ultimo vivo da roda
Aprendizado : Realizar uma contagem de vivos representados em saltos dentro de um vetor com valores lógicos.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int NC, n, k, m, i, j , t = 0;

    scanf("%d", &NC);

    while(t <= NC)
    {
        scanf("%d", &n);
        scanf("%d", &k);

        int p[n];
        i = 0;

        for(j = 0; j < n; j++){
            p[j] = 1;
        }

        int vivos = n;
        int c = 0;

        while(vivos != 1){
            if(p[i] == 1){
                c++;
                if(c == k){
                    p[i] = 0;
                    c = 0;
                    vivos -= 1;
                }
            }
        
            i = (i + 1) % n;
        }

        for(j = 0; j < n; j++){
            if(p[j] == 1){
                m = j;
            }
        }

        t++;

        printf("Case %d: %d\n", t, m + 1);
    }
}
