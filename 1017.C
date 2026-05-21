/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/1017
Exercício   : 1017
Data        : 21/05/2026
Objetivo    : Calcular o consumo de combustível do veículo.
Aprendizado : Uso de funções para realizar o cálculo.
-------------------------------------------------------------------------- */

#include <stdio.h>

float CalcularLitros(int tempo, int velocidade){
    int distancia = tempo * velocidade;
    double litros = (double)distancia/12;
    printf("%.3lf\n", litros);
    return litros;
}

int main(){
    int tempo, velocidade;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    CalcularLitros(tempo, velocidade);
}
