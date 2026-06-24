/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 23/06/2026
Objetivo    : Imprimir uma matriz de acordo com que foi pedido.
Aprendizado : Medir a distancia do ponto da matriz para imprimir que fora pedido.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int n, i, j;

    do
    {
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        int M[n][n];

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                
                int lin_acima = i + 1;
                int col_esq = j + 1;
                int lin_abaixo = n - i;
                int col_dir = n - j;
                
                int menor = lin_acima;

                if(col_esq < menor){
                    menor = col_esq;
                }
                if(lin_abaixo < menor) 
                {
                    menor = lin_abaixo;
                }
                if(col_dir < menor)
                {
                    menor = col_dir;
                }

                M[i][j] = menor;
            }
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(j == n - 1)
                {
                    printf("%3d", M[i][j]);
                }
                else{
                    printf("%3d ", M[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    } while(n != 0);

    return 0;
}
