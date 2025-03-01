// Your code here...
#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=4;i--){
        for(j=1;j<=n-i+1;j++){
            printf("%d ");
        }
        printf("\n");
    }
    return 0;
}