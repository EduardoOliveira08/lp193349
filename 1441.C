/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 08/06/2026
Objetivo    : Imprimir o maior valor da sequência de granizo.
Aprendizado : Usar a função recursiva para achar o maior valor de um sequencia.
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

long long granizo(long long n){
    long long maior;
    if(n == 1){
        return 1;
    }

    if(n % 2 == 0){
        maior = granizo(n/2);
    }
    else
    {
        maior = granizo(3 * n +1);
    }

    if(n > maior)
    {
        return n;
    }else
    {
        return maior;
    }
}

int main(){
    long long h; 
    
    scanf("%lld", &h);

    while(h != 0){
        printf("%lld\n", granizo(h));

        scanf("%lld", &h);
    }
}
