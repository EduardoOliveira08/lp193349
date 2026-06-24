/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira 
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 22/06/2026
Objetivo    : Leia os valores que tenha ou não pão de queijo e fazer a impressão de acordo.
Aprendizado : Manipulação de matriz e impressão.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int l, c, i, j;
    
    while(scanf("%d %d", &l, &c) != EOF){
        int m[l][c];

        for(i = 0; i < l; i++){
            for(j = 0; j < c; j++){
                scanf("%d", &m[i][j]);
            }
        }

        for(i = 0; i < l; i++){
            for(j = 0; j < c; j++){
                if(j < 0){
                    printf(" ");
                }
                if(m[i][j] == 1){
                printf("9");
                } else
                {
                    int cont = 0;

                    if(i + 1 < l && m[i + 1][j] == 1){
                        cont++; 
                    } 
                
                    if(i - 1 >= 0 && m[i - 1][j] == 1){
                        cont++;
                    }
                    
                    if(j + 1 < c && m[i][j + 1] == 1){
                        cont++;
                    }
                
                    if(j - 1 >= 0 && m[i][j - 1] == 1){
                        cont++;
                    }

                    printf("%d", cont);
                }
            }
            printf("\n");           
        }
    }
    return 0;       
}
