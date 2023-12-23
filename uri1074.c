#include<stdio.h>
int main()
{
    int x,y,N;
    scanf("%d",&N);
    for(x=1;x<=N;x++)
    {
        scanf("%d",&y);
        if(y==0)
        printf("NULL\n");
        else if(y<=0 && y%2==0)
        printf("EVEN NEGATIVE\n");
        else if(y<=0 && y%2==-1)
        printf("ODD NEGATIVE\n");
        else if(y>=0 && y%2==0)
        printf ("EVEN POSITIVE\n");
        else if(y>=0 && y%2==1)
        printf ("ODD POSITIVE\n");
    }
}
