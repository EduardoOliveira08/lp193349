/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 27/04/2026
Objetivo    : Realizar a Cifra de Cesar nas palavras embaralhadas.
Aprendizado : A percorrer o alfabeto na tabela ascii e desembaralhar palavras.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main(){
    int n, deslocamento;
    char str[51];

    scanf("%d", &n);
    getchar();

    while(n--){
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        scanf("%d", &deslocamento);
        getchar();

        for(int i = 0; str[i] != '\0'; i++){
            if (str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] - deslocamento;
                if (str[i] < 'A'){
                    str[i] += 26;
                }
            }
        }
        printf("%s\n", str);
    }
    return 0; 
}
