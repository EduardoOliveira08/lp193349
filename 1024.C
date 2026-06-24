/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografia de uma string.
Aprendizado : Manipulação de string e de seus caracteres para embaralha-los.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#define C 1000

int main(){
    int N, i, tamanho, metade;
    char str[C];

    scanf("%d", &N);
    getchar();

    while(N--){
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        
        for(i = 0; str[i] != '\0'; i++){
            if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
                str[i] += 3;
            }
        }

        tamanho = strlen(str);
        metade = tamanho/2;
        char aux;

        for(i = 0; i < metade; i++){
            aux = str[i];
            str[i] = str[tamanho - 1 - i];
            str[tamanho - 1 - i] = aux;
        }

        for(i = metade; str[i] != '\0'; i++){
            str[i] -= 1;
        }

        printf("%s\n", str);
    }
}
