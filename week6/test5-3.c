#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n+i ; j++){
            if(n-1-i<=j && j<=n-1+i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}