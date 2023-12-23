#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int l;
    while(scanf("%d %s", &l, s) == 2){
        long long total = 0;
        for(int i = 0 ; i < l ; i++){
            total += s[i] - '0';
        }
        if( total % 3 == 0){
            printf("%lld sim\n", total);
        }
        else{
            printf("%lld nao\n", total);
        }
    }
    return 0;
}
