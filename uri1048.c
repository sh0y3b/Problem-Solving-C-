#include<stdio.h>
int main()
{
    float x,sal,bon;
    int percent;
    scanf("%f",&x);
    if (x>=0 && x<=400.00){
    percent = 15;
    bon = (x*15)/100.00;
    sal = x+bon;
    }
    else if (x>400.00 && x<=800.00){
     percent = 12;
     bon = (x*12)/100.00;
     sal = x+bon;
    }
    else if (x>800 && x<=1200.00){
    percent = 10;
    bon = (x*10)/100.00;
    sal = x+bon;
    }
    else if (x>1200 && x<=2000.00){
    percent = 7;
    bon = (x*7)/100.00;
    sal = x+bon;
    }
    else if(x>2000.00){
    percent = 4;
    bon = (x*4)/100.00;
    sal = x+bon;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal,bon,percent);
}
