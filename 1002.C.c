/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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