#include<stdio.h>
int main()
{
    int N,h,m,s;
    scanf("%d",&N);
    h = N/3600;
    m = (N-(3600*h))/60;
    s = (N-(3600*h)-(m*60));
    printf("%d:%d:%d\n",h,m,s);


}
