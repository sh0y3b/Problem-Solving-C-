#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], tot = 0;
    for(int i = 0 ; i < n ;i++){
        scanf("%d", &a[i]);
        tot += a[i] / 3;
    }
    printf("%d\n", tot*3);
    return 0;
}
