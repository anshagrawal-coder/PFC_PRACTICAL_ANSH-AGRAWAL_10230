#include<stdio.h>
void diamond(int n ){
    for(int i = 1;i<=n;i++){
        for(int sp = 1;sp<=n-i;sp++){
            printf(" ");
        }
        for(int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
     for(int i = n;i>=1;i--){
        for(int sp = 1;sp<=n-i;sp++){
            printf(" ");
        }
        for(int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    diamond(n);
    return 0;
}