#include<stdio.h>
int main()
{
    float a,b,c,x,y;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
            x = a+b+c;
        printf ("Perimetro = %0.1f\n",x);

    }
    else { y = 0.5*(a+b)*c;
        printf("Area = %0.1f\n",y);

    }
}
