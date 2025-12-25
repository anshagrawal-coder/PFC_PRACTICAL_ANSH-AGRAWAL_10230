#include<stdio.h>
void hglass(int n){
    for(int i=n;i>=2;i--){
        for(int r=1;r<=n-i;r++){
            printf(" ");
        }
        for(int r=1;r<=2*i-1;r++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int r=1;r<=n-i;r++){
            printf(" ");
        }
        for(int r=1;r<=2*i-1;r++){
            printf("*");
        }
        printf("\n");
    }

}
int main(){
    int n;
    scanf("%d",&n);
    hglass(n);
    return 0;
}