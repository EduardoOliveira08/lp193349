#include <stdio.h>
#include <math.h>

double quadrado(double p, double t){
    return (p - t) * (p - t);
}

double distancia(double x1, double y1, double x2, double y2){
    double n = quadrado(x2, x1);
    double m = quadrado(y2, y1);
    double soma = n + m;
    double raiz = sqrt(soma);
    return raiz;
} 

int main()
{
    double a, b, c, d;
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &c, &d);

    printf("%.4lf\n",distancia(a, b, c, d));

    return 0;
}
