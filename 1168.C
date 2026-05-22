/* --------------------------------------------------------------------------
Nome        : Eduardo Ribeiro de Oliveira
RA          : 193349
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/1168
Exercício   : 1168
Data        : 21/05/2026
Objetivo    : Somar o número de leds utilizados.
Aprendizado : Uso do switch para um operador.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int N, S;
    char V[102];

    scanf("%d", &N);

    while(N--){
        S = 0;
        scanf("%s", V);

        for(int i = 0; V[i] != '\0'; i++){
            switch (V[i]){
                case '1':{
                    S += 2;
                    break;
                }
                case '2':{
                    S += 5;
                    break;
                }
                case '3':{
                    S += 5;
                    break;
                }
                case '5':{
                    S += 5;
                    break;
                }
                case '4':{
                    S += 4;
                    break;
                }
                case '6':{
                    S += 6;
                    break;
                }
                case '9':{
                    S += 6;
                    break;
                }
                case '0':{
                    S += 6;
                    break;
                }
                case '7':{
                    S += 3;
                    break;
                }
                case '8':{
                    S += 7;
                    break;
                }
                default:{
                    break;
                }
            }
        }
        printf("%d leds\n", S);
    }
}
