#include<stdio.h>
int fib(int n);
int a=0,num_call=0;
int main(){
            int n,tmp,cl,fn,ncl,t,i;
            while(scanf("%d",&t)==1){
            for(i=1;i<=t;i++){
            scanf("%d",&n);
               if(n>=1 && n<=39){
                  tmp=n;
                  fib(tmp);
                  ncl=num_call;
                  cl=a;
                 printf("fib(%d) = %d calls = %d\n",n,ncl-1,cl);
                  a=0;
                  num_call=0;
               }
            }
      }
return 0;
}
int fib(int n){
      int f;
      num_call++;
      if(n==0 ||  n==1 ){
      a=a+n;
      return n;
      }
      f= fib(n-1)+fib(n-2);
}
