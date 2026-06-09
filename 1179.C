/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Seu Nome>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 08/06/2026
Objetivo    : Preenchimento de vetores pares e impares.
Aprendizado : Manipulação dos vetores para ser preenchidos com os respectivos valores
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int num, par[5], impar[5];
    int p = 0, q = 0;

    for(int i = 0; i < 15; i++){
        scanf("%d", &num);
        
        if(num % 2 == 0){
            par[p] = num;
            p++;

            if(p == 5){
                for(int j = 0; j < p; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                p = 0;
            }    
        }else{
            impar[q] = num;
            q++;

            if(q == 5){
                for(int j = 0; j < q; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                q = 0;
            }
        }
    }
    for(int i = 0; i < q; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(int i = 0; i < p; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
