#include<stdio.h>
void rtiangle(n){
    for(int i = 1;i<=n;i++){
        for(int sp = 1;sp<=n-1;sp++){
            printf("");
        }
        for(int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    rtiangle();
    int n;
    scanf("%d",&n);
    return 0;
}
