/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 15/06/2026
Objetivo    : Saber qual é a ultima região a ser desligada.
Aprendizado : leitura de vetores e novamente com uma contagem da região que sobra.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int i, N, m, j, k;
    
    while(scanf("%d", &N) == 1 && N !=0){
        int R[N];

        for(m = 1; ; m++){
            i = 1;
            for(j = 0; j < N; j++){
                R[j] = 1; //1 indica se está ligada
            }
            
            R[0] = 0;//0 indica que está desligada

            int desligadas = N - 1;
            int c = 0;
            
            while(desligadas != 1){
                if(R[i] == 1){
                    c++;
                    if(c == m){
                        R[i] = 0;
                        desligadas -= 1;
                        c = 0;
                    }
                }

                i = (i + 1) % N;
            }

            if(R[12] == 1){
                printf("%d\n", m);
                break;
            }
        }
    }
}
