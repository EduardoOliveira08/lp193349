/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 16/06/2026
Objetivo    : Realizar uma verificação de um instancia do jogo sudoku.
Aprendizado : Uso de funções diferentes para validar cada parte do jogo.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int validar_linhas(int m[9][9]){
    int i, j; 
    
    for(i = 0; i < 9; i++){
        int vistos[10] = {0};//vetor que verifica os vistos

        for(j = 0; j < 9; j++){
            int numero = m[i][j];

            if(vistos[numero] == 1){
                return 0;//se o numero já foi visto é falso e está errado
            } else
            {
                vistos[numero] = 1;
            }
        }
    }

    return 1;//retorna sendo verdadeiro 
}

int validar_colunas(int m[9][9]){
    int i, j; 
    
    for(i = 0; i < 9; i++){
        int vistos[10] = {0};

        for(j = 0; j < 9; j++){
            int numero = m[j][i];//inverta os valores da matriz para ler as colunas 

            if(vistos[numero] == 1){
                return 0;
            } else
            {
                vistos[numero] = 1;
            }
        }
    }

    return 1;
}

int validar_bloco(int m[9][9]){
    for(int i = 0; i < 9; i +=3){
        for(int j = 0; j < 9; j +=3){
            int vistos[10] ={0};

            for(int lin = i; lin < i + 3; lin++){
                for(int col = j; col < j + 3; col++){
                    int numero = m[lin][col];

                    if(vistos[numero] == 1){
                        return 0;
                    } else{
                        vistos[numero] = 1;
                    }
                }
            }
        }
    }

    return 1;
}

int main(){
    int n, k;
    scanf("%d", &n);

    for(k = 1; k <= n; k++){
        int m[9][9];

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &m[i][j]);
            }
        }

        printf("Instancia %d\n", k);

        if(validar_linhas(m) == 1 && validar_colunas(m) == 1 && validar_bloco(m) == 1){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
