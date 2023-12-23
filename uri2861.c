#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[100];
    for (int i = 0; i < t; ++i)
    {
        fflush(stdin);
        fgets(s, sizeof(s), stdin);
        printf("gzuz\n");
    }
    return 0;
}
