/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Eduardo Ribeiro de Oliveira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 25/01/2026
Objetivo    : Organizar os alunos que queriam a camisa e suas informações.
Aprendizado : O uso de struct e como ordenar e comparar vetores de struct
Dúvidas     : Professor tive muitas dúvidas em como fazer, tanto que admito que apelei para a IA,
mas tentei de muitas formas que o meu nível não correspondia, havia confusão sobre os parametrôs 
da minha função e a manipulação dos ponteiros nesse caso foi difícil de se entender.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct camisa{
    char nome[100];
    char cor[20];
    char tamanho;
};

int comparar(const void *a, const void *b){

    struct camisa *x = (struct camisa *)a;
    struct camisa *y = (struct camisa *)b;

    int cor = strcmp(x->cor, y->cor);

    if(cor != 0){
        return cor;
    }

    if(x->tamanho != y->tamanho){
        return y->tamanho - x->tamanho;
    }

    return strcmp(x->nome, y->nome);
}

int main(){

    int N;
    int primeiroCaso = 1;

    while(scanf("%d", &N) && N != 0){

        getchar();

        struct camisa aluno[N];

        for(int i = 0; i < N; i++){

            fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);

            aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

            scanf("%s %c", aluno[i].cor, &aluno[i].tamanho);

            getchar();
        }

        qsort(aluno, N, sizeof(struct camisa), comparar);

        if(!primeiroCaso){
            printf("\n");
        }

        primeiroCaso = 0;

        for(int i = 0; i < N; i++){
            printf("%s %c %s\n",
                   aluno[i].cor,
                   aluno[i].tamanho,
                   aluno[i].nome);
        }
    }

    return 0;
}
