#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool prime(int);
int main()
{
    char s[100], s1[100];
    while(scanf("%s", s) != EOF){
        int sum=0, coun=0;
        strcpy(s1, s);
        int n=0;
        sscanf(s, "%d", &n);
        int l = strlen(s1);
        bool v = true;
        if(prime(n)){
            for(int i=0; i<l; i++){
                int temp = s[i]-'0';
                if(!prime(temp)){
                    v = false;
                    break;
                }
            }
            if(v){
                printf("Super\n");
            }
            else {
                printf("Primo\n");
            }
        }
        else printf("Nada\n");
    }
    return 0;
}

bool prime(int temp)
{
    if(temp == 0 || temp == 1) return false;
    for(int j=2; j<=temp/2; j++){
        if(temp%j==0){
            return false;
            break;
        }
    }
    return true;
}
