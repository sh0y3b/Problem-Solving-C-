#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d %d",&a,&b,&x);
    y = (a+b+abs(a-b))/2;
    y = (y+x+abs(y-x))/2;
    printf("%d eh o maior\n",y);
    return 0;

}
