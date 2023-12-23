#include<stdio.h>
int main()
{
    double A,B,C,tri,cir,trap,sq,rec,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=((double)1/(double)2)*A*C;
    cir=pi*(C*C);
    trap=((double)1/(double)2)*(A+B)*C;
    sq=(B*B);
    rec=A*B;
    printf("TRIANGULO: %0.3lf\n",tri);
    printf("CIRCULO: %0.3lf\n",cir);
    printf("TRAPEZIO: %0.3lf\n",trap);
    printf("QUADRADO: %0.3lf\n",sq);
    printf("RETANGULO: %0.3lf\n",rec);
    return 0;

}
