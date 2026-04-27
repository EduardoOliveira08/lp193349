/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 27/04/2026
Objetivo    : Realizar uma sentença dançante, que possui uma letra maiúscula e consequente minúscula.
Aprendizado : A manipulação de caractéres de maiúsculas e minúsculas.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[51];
    
    while(fgets(str, sizeof(str),stdin) != NULL){
        int maiuscula = 1;

        for(int i = 0; str[i] != '\0'; i++){
            if (str[i] == ' '){
                continue;
            }

            if (maiuscula){
                str[i] = toupper(str[i]);
            } else{
                str[i] = tolower(str[i]);
            }

            maiuscula = !maiuscula;
        }

        printf("%s", str);
    }

    return 0;
}
