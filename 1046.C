/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/1046
Exercício   : 1046
Data        : 21/05/2026
Objetivo    : Calcular a duração de um jogo.
Aprendizado : Uso de funções para realizar o cálculo.
-------------------------------------------------------------------------- */

#include <stdio.h>

int CalcularDuracao(int inicio, int fim){
    int maximo = 24, duracao;

    if(inicio == fim){
        duracao = maximo;
    }
    if(inicio < fim){
        duracao = fim - inicio;
    }
    if(inicio > fim){
        duracao = (maximo - inicio) + fim;
    }
    return duracao;
}

int main(){
    int inicial, final;
    
    scanf("%d", &inicial);
    scanf("%d", &final);

    printf("O JOGO DUROU %d HORA(S)\n", CalcularDuracao(inicial,final));
}
