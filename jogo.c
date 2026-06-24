/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : Jogo Sudoku
Data        : 23/06/2026
Objetivo    : Realizar um jogo de sudoku interativo.
Aprendizado : Impressão de matriz, interação com o usuário digitando os valores para ganho do jogo.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int validar_linhas(int m[9][9]){
    int i, j; 
    
    for(i = 0; i < 9; i++){
        int vistos[10] = {0};//vetor que verifica os vistos

        for(j = 0; j < 9; j++){
            int numero = m[i][j];

            if(numero != 0){
                if(vistos[numero] == 1){
                    return 0;//se o numero já foi visto é falso e está errado
                } else
                {
                    vistos[numero] = 1;
                    }
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

            if(numero != 0){
                if(vistos[numero] == 1){
                    return 0;//se o numero já foi visto é falso e está errado
                } else
                {
                    vistos[numero] = 1;
                }
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

                    if(numero != 0){
                        if(vistos[numero] == 1){
                            return 0;//se o numero já foi visto é falso e está errado
                        } else
                        {
                            vistos[numero] = 1;
                        }
                    }
                }
            }
        }
    }

    return 1;
}

void imprimir_matriz(int m[9][9]){
    int i, j;

    printf("\n---------x JOGO SUDOKU x---------\n\n");
    for(i = 0; i < 9; i++){
        if(i % 3 == 0 && i > 0){
            printf("------------------------\n");
        }
        for(j = 0; j < 9; j++){
            if(j % 3 == 0 && j > 0){
                printf("| ");
            }
            if(m[i][j] == 0){
                printf("_ ");
            }else{
                printf("%d ", m[i][j]);
            }
            
        }
        printf("\n");
    }
}

int validar_vitoria(int m[9][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(m[i][j] == 0){
                return 0;
            }
        }
    }

    return 1;
}

int main(){
    FILE *arquivo;

    arquivo = fopen("input2.txt", "r");

    if(arquivo == NULL){
        //printf("ERRO!");
        return 1;
    }

    int m[9][9], i, j;

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            fscanf(arquivo, " %d", &m[i][j]);
        }
    }

    fclose(arquivo);

    int jogada = 1;
    int lin, col, num;

    while(jogada != 0 ){
        imprimir_matriz(m);

        printf("\nDigite o numero da linha (0-8): \n");
        scanf("%d", &lin);
        printf("\nDigite o numero da coluna (0-8): \n");
        scanf("%d", &col);

        if(lin < 0 || lin > 8 || col < 0 || col > 8){
            printf("\nValor invalidos! Digite outro valor.");
            continue;
        }

        printf("\nDigite o numero desejado (1-9): \n");
        scanf("%d", &num);

        if(num < 1 || num > 9 ){
            printf("Jogada invalida. Digite outro valor.");
            continue;
        }

        if(m[lin][col] != 0){
            printf("\nJogada invalida! Tente outro.\n");
            continue;
        }else
        {
            m[lin][col] = num;
        }

        if(validar_linhas(m) == 0 || validar_colunas(m) == 0 || validar_bloco(m) == 0){
            printf("\nJogada invalida! Tente outro.\n");
            m[lin][col] = 0;
        } else
        {
            printf("\n\nBoa jogada!!\n\n");
            
            if(validar_vitoria(m) == 1){
                imprimir_matriz(m);

                printf("\n\nParabens!! Voce venceu!\n");
                jogada = 0;
            }
        }


    }

    return 0;
}
