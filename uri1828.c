#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        char a[10], b[10], c[15];
        scanf("%s %s", a, b);
        if((strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) || (strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) || (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) || (strcmp(a, "lagarto") == 0 && strcmp(b, "Spock") == 0) || (strcmp(a, "Spock") == 0 && strcmp(b, "tesoura") == 0) || (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) || (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) || (strcmp(a, "papel") == 0 && strcmp(b, "Spock") == 0) || (strcmp(a, "Spock") == 0 && strcmp(b, "pedra") == 0) || (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0)){
            strcpy(c, "Bazinga!");
        }
        else if(strcmp(a, b) == 0){
            strcpy(c, "De novo!");
        }
        else
            strcpy(c, "Raj trapaceou!");
        printf("Caso #%d: %s\n", i, c);
    }
    return 0;
}
