/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1000
Data        : 07/04/2026
Objetivo    : Verificar qual dos três número é o maior.
Aprendizado : Utilização de lógica ao atribuir variáveis para realizar o cálculo de variável foi lida com o maior valor. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int a, b, c, maiorAB, maior;
    
    scanf("%d %d %d", &a,&b,&c);
    maiorAB = ((a+b+abs(a-b))/2);
    maior = ((maiorAB+c+abs(maiorAB-c))/2);
    
    printf("%d eh o maior\n", maior);
 
    return 0;
}
