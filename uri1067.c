#include<stdio.h>
int main()
{
    int i,X;
    scanf("%d",&i);
    for (X = 1;X <= i;X += 2){
        if(X%2!=0){
            printf("%d\n",X);
        }
    }

}
