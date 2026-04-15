/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 14/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma dos números ímpares entre eles.
Aprendizado : aprendemos a usar o laço for para verificarmos intervalos e percorre-los com uma variável de controle.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int x, y, maior, menor, soma ;
    
    soma = 0;
    (scanf("%d %d", &x, &y) != 2);
    
    if(x > y){
        maior = x;
        menor = y;
    } else{
        maior = y;
        menor = x;
    }
    
    for(int i = menor + 1; i < maior; i++){
        if (i % 2 != 0){
            soma += i;
        }
        
    }
    
    printf("%d\n", soma);
    
    return 0;
}
