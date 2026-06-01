/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliverira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 28/05/2026
Objetivo    : Chamadas para achar o número de fibonacci.
Aprendizado : Uso da função da função recursiva e contagem de quantas vezes chamou aquele função recursivamente.
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- */

#include <stdio.h>

int contador = 0;

int fibonacci(int x)
{
    contador++;

    if(x==0)
    {
        return 0;
    }
    if(x == 1)
    {
        return 1;
    }

    return fibonacci(x-1) + fibonacci(x - 2);
}
int main(){
    int N, i, n;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        contador = 0;
        scanf("%d", &n);
        int resultado = fibonacci(n);

        printf("fib(%d) = %d calls = %d\n", n, contador-1, resultado);
    }

    return 0;
}
