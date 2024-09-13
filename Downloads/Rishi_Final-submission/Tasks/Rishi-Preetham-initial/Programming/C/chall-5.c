#include <stdio.h>
int main() {
    int n,m,i,mul=0,j;
    scanf("%d %d",&m,&n);
    if(m>n){
        while(n--){
            mul+=m;
        }
    }else{
        while(m--){
            mul+=n;
        }
    }printf("%d",mul);
    return 0;
}
