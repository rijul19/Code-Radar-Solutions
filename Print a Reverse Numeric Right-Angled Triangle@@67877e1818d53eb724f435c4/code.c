// Your code here...
#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i<=4;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}